#include "animal.hpp"

Animal::Animal()
{
	std::cout << "Animal created" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal Destroyed" << std::endl;
}

Animal::Animal(const Animal& other)
{
    this->type = other.type;
    std::cout << "Animal copy constructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& other)
{
    if (this != &other)
        this->type = other.type;
    return (*this);
}

void	Animal::makeSound(void) const
{
	std::cout << "animal noises" << std::endl;
}

std::string Animal::getType() const
{
	return (this->type);
}
