#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
# include "poly.hpp"

class Dog : public Animal
{
public:
    Dog(const std::string type = "Dog");
    Dog(const Dog& other);
    Dog& operator=(const Dog& other);
    ~Dog();
};

#endif