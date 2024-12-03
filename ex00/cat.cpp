#include "cat.hpp"

Cat::Cat()
{
    type = "Cat";
    std::cout << "Cat object created" << std::endl;
}
Cat::~Cat()
{
    std::cout << "Cat object destroyed" << std::endl;
}

void    Cat::makeSound() const
{
    std::cout << "Meow" << std::endl;
}
