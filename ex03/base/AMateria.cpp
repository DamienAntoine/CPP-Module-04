#include "AMateria.hpp"

AMateria::AMateria(std::string const& type) : _type(type)
{}

AMateria::AMateria(const AMateria& materia) : _type(materia._type)
{
	//std::cout << "AMateria copy constructor called" << std::endl;
}

std::string const& AMateria::getType() const
{
	return this->_type;
}

void AMateria::use(ICharacter& target)
{
	std::cout << "*AMateria base class use on " << target.getName() << "*" << std::endl;
}

AMateria::~AMateria()
{}
