#include "dog.hpp"

Dog::Dog(const std::string type) : Animal(type)
{
    std::cout << "Animal " << Type << " is out." << std::endl;
}
