#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
# include "brain.hpp"
# include "poly.hpp"

class Dog : public Animal
{
private:
    Brain* brain;

public:
    Dog();
    Dog(const Dog& other);
    Dog& operator=(const Dog& other);
    ~Dog();

    Brain* getBrain() const;

    void makeSound() const;
};

#endif
