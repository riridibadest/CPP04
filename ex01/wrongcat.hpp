#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
# include <string>
# include "brain.hpp"
# include "wrongpoly.hpp"

class WrongCat : public WrongAnimal
{
private:
    Brain* brain;

public:
    WrongCat();
    WrongCat(const WrongCat& other);
    WrongCat& operator=(const WrongCat& other);
    ~WrongCat();

    Brain* getBrain() const;

    void makeSound() const;//hides, does not override: never reached via WrongAnimal*
};

#endif
