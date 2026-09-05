#include "wrongpoly.hpp"

WrongAnimal::WrongAnimal() : Type("wrong random animal")
{
    std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) : Type(other.Type)
{
    std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
    std::cout << "WrongAnimal assignment operator called" << std::endl;
    if (this != &other)
        this->Type = other.Type;
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return (this->Type);
}

void WrongAnimal::makeSound() const
{
    std::cout << "* the wrong, generic noise *" << std::endl;
}
