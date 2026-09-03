#ifndef POLY_HPP
# define POLY_HPP

# include <iostream>
# include <string>

class Animal {
protected://can be used for child classes
    std::string Type;

public:
    Animal(std::string type = "random animal");
    Animal(const Animal& other);
    Animal& operator=(const Animal& other);
    ~Animal();
};

#endif