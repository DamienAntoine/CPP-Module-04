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
		~Dog();
		void	makeSound() const override;
};

#endif
