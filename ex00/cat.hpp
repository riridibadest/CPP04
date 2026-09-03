#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
# include "poly.hpp"

class Cat : public Animal
{
public:
    Cat(const std::string type = "Cat");
    Cat(const Cat& other);
    Cat& operator=(const Cat& other);
    ~Cat();
};

#endif