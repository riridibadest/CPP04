#include "cat.hpp"

Cat::Cat(const std::string type) : Animal(type)
{
    std::cout << "Animal " << Type << " is out." << std::endl;
}

