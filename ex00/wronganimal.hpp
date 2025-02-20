#ifndef __WRONG_ANIMAL__
#define __WRONG_ANIMAL__

#include <iostream>

class WrongAnimal
{
	protected:
		std::string type;
	public:
		WrongAnimal();
		~WrongAnimal();
		void	makeSound() const;
		std::string getType() const;
};

#endif
