#ifndef __DOG_H__
#define __DOG_H__

#include <iostream>
#include "animal.hpp"

// ************************************************************************** //
//                              Dog      Class                                //
// ************************************************************************** //

class Dog : public Animal
{
	public:
		Dog();
        Dog(const Dog& other);

        Dog& operator=(const Dog& other);

		~Dog();
		virtual void	makeSound() const;
};

#endif
