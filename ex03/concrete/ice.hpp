#ifndef __ICE__
#define __ICE__

#include "../base/AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		Ice(const Ice& other);
		~Ice();

		AMateria* clone() const override;
		void use(ICharacter& target) override;
};

#endif
