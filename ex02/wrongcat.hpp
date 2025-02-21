#ifndef __WRONGCAT_H__
#define __WRONGCAT_H__

#include "wronganimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		~WrongCat();
        WrongCat(const WrongCat &other);

        WrongCat& operator=(const WrongCat& other);

		void makeSound() const;
};

#endif
