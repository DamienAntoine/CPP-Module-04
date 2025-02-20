#include "cat.hpp"

Cat::Cat() : brain(new Brain())
{
	type = "Cat";
	std::cout << "Cat created" << std::endl;
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "Cat destroyed" << std::endl;
}

Cat::Cat(const Cat &other) : aAnimal(other)
{
	this->brain = new Brain(*other.brain);
	this->type = other.type;
	std::cout << "Cat copied" << std::endl;
}

Cat& Cat::operator=(const Cat &other)
{
	if (this != &other)
	{
		aAnimal::operator=(other);
		delete this->brain;
		this->brain = new Brain(*other.brain);
		this->type = other.type;
	}
	return *this;
}

void	Cat::makeSound() const
{
	std::cout << "meow" << std::endl;
}
