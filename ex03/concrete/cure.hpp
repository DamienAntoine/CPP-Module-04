#ifndef __CURE__
#define __CURE__

#include "../base/AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		Cure(const Cure& other);
		~Cure();

		AMateria* clone() const override;
		void use(ICharacter& target) override;
};

#endif
