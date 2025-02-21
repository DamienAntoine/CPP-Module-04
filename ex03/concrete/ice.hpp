#ifndef __ICE__
#define __ICE__

#include "../base/AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		Ice(const Ice& other);
		~Ice();

		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif
