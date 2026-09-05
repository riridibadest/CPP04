#include "dog.hpp"

Dog::Dog() : Animal()
{
    this->Type = "Dog";
    std::cout << "Dog constructor called: a dog joins the pack" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other)
{
    std::cout << "Dog copy constructor called: cloning a dog" << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
    std::cout << "Dog assignment operator called" << std::endl;
    if (this != &other)
        this->Animal::operator=(other);
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Dog destructor called: the dog runs off" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Woof! Woof!" << std::endl;
}
