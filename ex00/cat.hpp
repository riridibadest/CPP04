#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
# include "poly.hpp"

class Cat : public Animal
{
public:
    Cat();
    Cat(const Cat& other);
    Cat& operator=(const Cat& other);
    ~Cat();

    void makeSound() const;
};

#endif
