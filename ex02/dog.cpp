#include "dog.hpp"

Dog::Dog() : brain(new Brain())
{
	type = "Dog";
	std::cout << "Dog created" << std::endl;
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "Dog destroyed" << std::endl;
}

Dog::Dog(const Dog &other) : aAnimal(other)
{
    this->brain = new Brain(*other.brain);
    this->type = other.type;
    std::cout << "Dog copied" << std::endl;
}

Dog& Dog::operator=(const Dog &other)
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

void	Dog::makeSound() const
{
	std::cout << "Woof" << std::endl;
}
