#include "cat.hpp"

Cat::Cat() : Animal(), brain(new Brain())
{
    this->Type = "Cat";
    std::cout << "Cat spawn" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other), brain(new Brain(*other.brain))
{
    std::cout << "Cloning a cat" << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
    std::cout << "Cat assignment operator called" << std::endl;
    if (this != &other)
    {
        this->Animal::operator=(other);
        *this->brain = *other.brain;
    }
    return (*this);
}

Cat::~Cat()
{
    delete this->brain;
    std::cout << "Cat went wonderland" << std::endl;
}

Brain* Cat::getBrain() const
{
    return (this->brain);
}

void Cat::makeSound() const
{
    std::cout << "Miiiiiiao... meow!" << std::endl;
}
