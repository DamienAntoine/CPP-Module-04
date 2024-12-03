#include "wrongcat.hpp"

WrongCat::WrongCat()
{
    type = "Cat";
    std::cout << "Cat object created" << std::endl;
}
WrongCat::~WrongCat()
{
    std::cout << "Cat object destroyed" << std::endl;
}

void    WrongCat::makeSound() const
{
    std::cout << "Meow" << std::endl;
}
