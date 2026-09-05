#include <iostream>
#include "poly.hpp"
#include "dog.hpp"
#include "cat.hpp"
#include "wrongpoly.hpp"
#include "wrongcat.hpp"

static void title(const std::string& s)
{
    std::cout << std::endl << "===== " << s << " =====" << std::endl;
}

int main()
{
    title("the subject's test: polymorphism through Animal*");
    {
        const Animal* meta = new Animal();
        const Animal* j = new Dog();
        const Animal* i = new Cat();

        std::cout << std::endl;
        std::cout << j->getType() << " " << std::endl;
        std::cout << i->getType() << " " << std::endl;
        i->makeSound();//the cat sound
        j->makeSound();//the dog sound
        meta->makeSound();

        std::cout << std::endl;
        delete meta;
        delete j;//virtual destructor: ~Dog then ~Animal
        delete i;
    }

    title("WrongCat through a WrongAnimal*: no polymorphism");
    {
        const WrongAnimal* wmeta = new WrongAnimal();
        const WrongAnimal* wi = new WrongCat();

        std::cout << std::endl;
        std::cout << wi->getType() << " " << std::endl;
        wi->makeSound();//WrongAnimal's sound, NOT the cat's
        wmeta->makeSound();

        std::cout << std::endl;
        delete wmeta;
        delete wi;//non-virtual destructor: ~WrongCat is skipped
    }

    title("WrongCat through its real type: its own sound is reachable");
    {
        const WrongCat wc;
        std::cout << std::endl;
        wc.makeSound();
        std::cout << std::endl;
    }

    title("stack objects, direct calls");
    {
        const Dog d;
        const Cat c;
        std::cout << std::endl;
        std::cout << d.getType() << ": ";
        d.makeSound();
        std::cout << c.getType() << ": ";
        c.makeSound();
        std::cout << std::endl;
    }

    title("copy construction and assignment");
    {
        Dog a;
        std::cout << std::endl;
        Dog b(a);//copy ctor
        Dog e;
        std::cout << std::endl;
        e = a;//assignment
        std::cout << std::endl;
        std::cout << "b type: " << b.getType() << " | e type: " << e.getType() << std::endl;
        std::cout << std::endl;
    }

    title("an array of Animal*: each element sounds off correctly");
    {
        const int size = 4;
        Animal* pen[size];

        for (int k = 0; k < size; ++k)
            pen[k] = (k % 2 == 0) ? static_cast<Animal*>(new Dog()) : static_cast<Animal*>(new Cat());

        std::cout << std::endl;
        for (int k = 0; k < size; ++k)
        {
            std::cout << "[" << k << "] " << pen[k]->getType() << ": ";
            pen[k]->makeSound();
        }

        std::cout << std::endl;
        for (int k = 0; k < size; ++k)
            delete pen[k];
    }

    title("done");
    return (0);
}
