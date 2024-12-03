#include "animal.hpp"

Animal::Animal()
{
    std::cout << "Animal object created" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal object destroyed" << std::endl;
}

void Animal::makeSound() const
{
    std::cout << "Animal noise" << std::endl;
}

std::string    Animal::getType() const
{
    return type;
}