#include "cat.hpp"

Cat::Cat() : Animal()
{
    this->Type = "Cat";
    std::cout << "Cat constructor called: a cat deigns to appear" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other)
{
    std::cout << "Cat copy constructor called: cloning a cat" << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
    std::cout << "Cat assignment operator called" << std::endl;
    if (this != &other)
        this->Animal::operator=(other);
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Cat destructor called: the cat wanders away" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Meow... meow!" << std::endl;
}
