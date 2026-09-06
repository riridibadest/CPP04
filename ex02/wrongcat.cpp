#include "wrongcat.hpp"

WrongCat::WrongCat() : WrongAnimal(), brain(new Brain())
{
    this->Type = "WrongCat";
    std::cout << "WrongCat created" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other), brain(new Brain(*other.brain))
{
    std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
    std::cout << "WrongCat assignment operator called" << std::endl;
    if (this != &other)
    {
        this->WrongAnimal::operator=(other);
        *this->brain = *other.brain;
    }
    return (*this);
}

WrongCat::~WrongCat()
{
    delete this->brain;
    std::cout << "WrongCat destructor called" << std::endl;
}

Brain* WrongCat::getBrain() const
{
    return (this->brain);
}

void WrongCat::makeSound() const
{
    std::cout << "Meouuw" << std::endl;
}
