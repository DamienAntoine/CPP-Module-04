#include "animal.hpp"

Animal::Animal()
{
	std::cout << "Animal created" << std::endl;
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
