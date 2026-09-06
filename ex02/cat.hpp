#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
# include "brain.hpp"
# include "poly.hpp"

class Cat : public Animal
{
private:
    Brain* brain;

public:
    Cat();
    Cat(const Cat& other);
    Cat& operator=(const Cat& other);
    ~Cat();

    Brain* getBrain() const;

    void makeSound() const;
};

#endif
