#include "animal.hpp"

aAnimal::aAnimal()
{
	std::cout << "Animal created" << std::endl;
}

aAnimal::aAnimal(const aAnimal &other)
{
	this->type = other.type;
	std::cout << "Animal copied" << std::endl;
}

aAnimal& aAnimal::operator=(const aAnimal &other)
{
	if (this != &other)
	{
		this->type = other.type;
	}
	std::cout << "Animal assigned" << std::endl;
	return *this;
}

aAnimal::~aAnimal()
{
	std::cout << "Animal Destroyed" << std::endl;
}

void	aAnimal::makeSound(void) const
{
	std::cout << "animal noises" << std::endl;
}

std::string aAnimal::getType() const
{
	return (this->type);
}
