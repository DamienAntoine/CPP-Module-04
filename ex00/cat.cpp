#include "cat.hpp"

Cat::Cat()
{
	type = "Cat";
	std::cout << "Cat created" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destroyed" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other)
{
    this->type = other.type;
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
    if (this != &other)
        this->type = other.type;

    return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "meow" << std::endl;
}
