#include "poly.hpp"

Animal::Animal() : Type("random animal")
{
    std::cout << "Animal created" << std::endl;
}
//only needed when owning value & ithas to change
Animal::Animal(const Animal& other) : Type(other.Type)
{
    std::cout << "Animal copy constructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& other)
{
    std::cout << "Animal assignment operator called" << std::endl;
    if (this != &other)
        this->Type = other.Type;
    return (*this);
}

Animal::~Animal()
{
    std::cout << "Animal erased" << std::endl;
}

std::string Animal::getType() const
{
    return (this->Type);
}

void Animal::makeSound() const
{
    std::cout << "* some vague animal noise *" << std::endl;
}
