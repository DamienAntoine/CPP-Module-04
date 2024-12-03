#include "dog.hpp"

Dog::Dog()
{
    type = "Dog";
    std::cout << "Dog object created" << std::endl;
}
Dog::~Dog()
{
    std::cout << "Dog object destroyed" << std::endl;
}

void    Dog::makeSound() const
{
    std::cout << "Woof" << std::endl;
}