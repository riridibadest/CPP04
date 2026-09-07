#include "dog.hpp"

Dog::Dog() : Animal(), brain(new Brain())
{
    this->Type = "Dog";
    std::cout << "Dog spawn" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other), brain(new Brain(*other.brain))
{
    std::cout << "Cloning a dog" << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
    std::cout << "Dog assignment operator called" << std::endl;
    if (this != &other)
    {
        this->Animal::operator=(other);
        *this->brain = *other.brain;//grab the value that are stored at the pointer
    }
    return (*this);
}

Dog::~Dog()
{
    delete this->brain;
    std::cout << "Dog went wonderland" << std::endl;
}

Brain* Dog::getBrain() const
{
    return (this->brain);
}

void Dog::makeSound() const
{
    std::cout << "WOAF! Woof!" << std::endl;
}
