#ifndef __CAT_H__
#define __CAT_H__

#include <iostream>
#include "animal.hpp"
#include "brain.hpp"

// ************************************************************************** //
//                              Cat      Class                                //
// ************************************************************************** //

class Cat : public Animal
{
	private:
		Brain* brain;

	public:
		Cat();
		Cat(const Cat &other);
        Cat& operator=(const Cat &other);
		virtual ~Cat();
		virtual void	makeSound() const;
};

#endif
