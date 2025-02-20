#ifndef __WRONGCAT_H__
#define __WRONGCAT_H__

#include "wronganimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		~WrongCat();
		void makeSound() const;
};

#endif
