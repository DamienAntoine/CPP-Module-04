#include "wronganimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "Wrong Animal Created." << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Wrong Animal Destroyed." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
    this->type = other.type;
    std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
    if (this != &other)
        this->type = other.type;
    return (*this);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "wrong animal noises" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (this->type);
}
