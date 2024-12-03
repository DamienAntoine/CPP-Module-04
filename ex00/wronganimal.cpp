#include "wronganimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "Animal object created" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Animal object destroyed" << std::endl;
}

void WrongAnimal::makeSound() const
{
    std::cout << "Animal noise" << std::endl;
}

std::string    WrongAnimal::getType() const
{
    return type;
}