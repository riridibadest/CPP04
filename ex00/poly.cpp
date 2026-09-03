#include "poly.hpp"

Animal::Animal(std::string type) : Type(type)
{
    std::cout << "Animal " << Type << " is called." << std::endl;
}