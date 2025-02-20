#include "wronganimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "Wrong Animal Created." << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Wrong Animal Destroyed." << std::endl;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "wrong animal noises" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (this->type);
}
