#ifndef __AMATERIA__
#define __AMATERIA__

#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
	protected:
		std::string _type;

	public:
		AMateria(std::string const& type); //construct
		AMateria(const AMateria& materia); //copy
		virtual ~AMateria(); //destruct

		std::string const& getType() const;

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif
