#include <iostream>
#include "poly.hpp"
#include "dog.hpp"
#include "cat.hpp"
#include "wrongpoly.hpp"
#include "wrongcat.hpp"

int main()
{
    std::cout << "\n" << std::endl;
    std::cout << " ========= WrongAnimal tests ========= " << std::endl;
    std::cout << "\n" << std::endl;
    {
        WrongAnimal wrongAnimal;
        std::cout << wrongAnimal.getType() << ": ";
        wrongAnimal.makeSound();

        WrongCat wrongCat;
        std::cout << wrongCat.getType() << ": ";
        wrongCat.makeSound();

        WrongAnimal* wrongAnimalPointer = &wrongCat;
        std::cout << "Through WrongAnimal*: ";
        wrongAnimalPointer->makeSound();

        WrongAnimal cpWrongAnimal(wrongAnimal);
        WrongAnimal assignedWrongAnimal;
        assignedWrongAnimal = wrongAnimal;
        if (cpWrongAnimal.getType() == wrongAnimal.getType()
            && assignedWrongAnimal.getType() == wrongAnimal.getType())
            std::cout << "WrongAnimal copy and assignment passed" << std::endl;

        WrongCat source;
        source.getBrain()->ideas[0] = "AOOOO";
        WrongCat copy(source);
        source.getBrain()->ideas[0] = "AAAOOOO";
        if (copy.getBrain()->ideas[0] == "AOOOO")
            std::cout << "WrongCat copy has an independent Brain" << std::endl;

        WrongCat assigned;
        assigned = source;
        source.getBrain()->ideas[0] = "changed again";
        if (assigned.getBrain()->ideas[0] == "changed wrong cat idea")
            std::cout << "WrongCat assignment has an independent Brain" << std::endl;
    }

    std::cout << "\n" << std::endl;
    std::cout << " ========= Deep copy construction ========= " << std::endl;
    std::cout << "\n" << std::endl;
    {
        Dog OGDog;
        OGDog.getBrain()->ideas[0] = "Dog wanna eat food";
        Dog cpDog(OGDog);
        OGDog.getBrain()->ideas[0] = "Dog wanna eat bones";
        if (cpDog.getBrain()->ideas[0] == "Dog wanna eat food")
            std::cout << "cpDog has its own Brain!" << std::endl;
        else
            std::cout << "cpDog brainless..." << std::endl;

        Cat OGCat;
        OGCat.getBrain()->ideas[0] = "Cat wanna eat food";
        Cat cpCat(OGCat);
        OGCat.getBrain()->ideas[0] = "Cat wanna eat birds";
        if (cpCat.getBrain()->ideas[0] == "Cat wanna eat food")
            std::cout << "cpCat has its own Brain!" << std::endl;
        else
            std::cout << "cpCat brainless..." << std::endl;
    }
    std::cout << "\n" << std::endl;
    std::cout << " ========= Deep copy assignment ========= " << std::endl;
    std::cout << "\n" << std::endl;
    {
        Dog sourceDog;
        sourceDog.getBrain()->ideas[0] = "source dog idea";
        Dog assignedDog;
        assignedDog = sourceDog;
        sourceDog.getBrain()->ideas[0] = "changed source dog idea";
        if (assignedDog.getBrain()->ideas[0] == "source dog idea")
            std::cout << "Dog assignment has an independent Brain" << std::endl;
        else
            std::cout << "Dog assignment test failed" << std::endl;

        Cat sourceCat;
        sourceCat.getBrain()->ideas[0] = "source cat idea";
        Cat assignedCat;
        assignedCat = sourceCat;
        sourceCat.getBrain()->ideas[0] = "changed source cat idea";
        if (assignedCat.getBrain()->ideas[0] == "source cat idea")
            std::cout << "Cat assignment has an independent Brain" << std::endl;
        else
            std::cout << "Cat assignment test failed" << std::endl;
    }
    std::cout << "\n" << std::endl;
    std::cout << " ========= Animal array: two Dogs and two Cats ========= " << std::endl;
    std::cout << "\n" << std::endl;
    {
        const int size = 4;
        Animal* animals[size];

        animals[0] = new Dog();
        animals[1] = new Dog();
        animals[2] = new Cat();
        animals[3] = new Cat();

        for (int i = 0; i < size; ++i)
        {
            std::cout << animals[i]->getType() << ": ";
            animals[i]->makeSound();
        }

        for (int i = 0; i < size; ++i)
            delete animals[i];
    }
    std::cout << "\n" << std::endl;
    std::cout << "All tests passed" << std::endl;
    return 0;
}
