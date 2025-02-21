#ifndef __CAT_H__
#define __CAT_H__

#include <iostream>
#include "animal.hpp"

// ************************************************************************** //
//                              Cat      Class                                //
// ************************************************************************** //

class Cat : public Animal
{
	public:
		Cat();
        Cat(const Cat &other);

        Cat& operator=(const Cat& other);

		~Cat();
		virtual void	makeSound() const;
};

#endif
