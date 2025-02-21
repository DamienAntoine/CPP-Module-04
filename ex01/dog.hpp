#ifndef __DOG_H__
#define __DOG_H__

#include <iostream>
#include "animal.hpp"
#include "brain.hpp"

// ************************************************************************** //
//                              Dog      Class                                //
// ************************************************************************** //

class Dog : public Animal
{
	private:
		Brain* brain;

	public:
		Dog();
		Dog(const Dog &other);
		Dog& operator=(const Dog &other);
		virtual ~Dog();
		virtual void	makeSound() const;
};

#endif
