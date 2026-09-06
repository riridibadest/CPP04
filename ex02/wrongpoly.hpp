#ifndef WRONGPOLY_HPP
# define WRONGPOLY_HPP

# include <iostream>
# include <string>

class WrongAnimal
{
protected:
    std::string Type;

public:
    WrongAnimal();
    WrongAnimal(const WrongAnimal& other);
    WrongAnimal& operator=(const WrongAnimal& other);
    ~WrongAnimal();

    std::string getType() const;
    void makeSound() const;
};

#endif
