#ifndef WRONGPOLY_HPP
# define WRONGPOLY_HPP

# include <iostream>
# include <string>

class WrongAnimal {
protected:
    std::string Type;

public:
    WrongAnimal();
    WrongAnimal(const WrongAnimal& other);
    WrongAnimal& operator=(const WrongAnimal& other);
    ~WrongAnimal();//NOT virtual, this is the "wrong" one

    std::string getType() const;
    void makeSound() const;//NOT virtual: calls bind statically to WrongAnimal
};

#endif
