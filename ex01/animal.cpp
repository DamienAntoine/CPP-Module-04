#include "animal.hpp"

Animal::Animal()
{
	std::cout << "Animal created" << std::endl;
}

Animal::Animal(const Animal &other)
{
	this->type = other.type;
	std::cout << "Animal copied" << std::endl;
}

Animal& Animal::operator=(const Animal &other)
{
	if (this != &other)
	{
		this->type = other.type;
	}
	std::cout << "Animal assigned" << std::endl;
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal Destroyed" << std::endl;
}

void	Animal::makeSound(void) const
{
	std::cout << "animal noises" << std::endl;
}

std::string Animal::getType() const
{
	return (this->type);
}
