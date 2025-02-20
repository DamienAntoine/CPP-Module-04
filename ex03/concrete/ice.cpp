#include "ice.hpp"

Ice::Ice() : AMateria("Ice")
{
	std::cout << "Ice constructor called" << std::endl;
}

Ice::Ice(const Ice& other) : AMateria(other)
{
	std::cout << "Ice copy constructor called" << std::endl;
}

Ice::~Ice()
{
	std::cout << "Ice destructor called" << std::endl;
}

AMateria* Ice::clone() const
{
	return (new Ice(*this));
}

void Ice::use(ICharacter& target)
{
	std::cout << "Ice : \"*Shoots an Ice bolt at " << target.getName() << " *\"" << std::endl;
}
