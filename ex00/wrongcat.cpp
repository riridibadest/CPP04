#include "wrongcat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
    this->Type = "WrongCat";
    std::cout << "WrongCat constructor called: a sus cat spawned" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other)
{
    std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
    std::cout << "WrongCat assignment operator called" << std::endl;
    if (this != &other)
        this->WrongAnimal::operator=(other);
    return (*this);
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "Meow? (you will never hear this through a WrongAnimal*)" << std::endl;
}
