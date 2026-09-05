#ifndef POLY_HPP
# define POLY_HPP

# include <iostream>
# include <string>

class Animal {
protected://can be used for child classes
    std::string Type;

public:
    Animal();
    Animal(const Animal& other);
    Animal& operator=(const Animal& other);
    virtual ~Animal();//virtual: deleting a Dog through an Animal* must run ~Dog

    std::string getType() const;
    virtual void makeSound() const;
};

#endif
