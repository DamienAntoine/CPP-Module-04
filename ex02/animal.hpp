#ifndef __ANIMAL_H__
#define __ANIMAL_H__

#include <iostream>


// ************************************************************************** //
//                             Animal    Class                                //
// ************************************************************************** //

class aAnimal
{
	protected:
		std::string type;

	public:
		aAnimal();
		aAnimal(const aAnimal &other);

		aAnimal& operator=(const aAnimal &other);

		virtual ~aAnimal();
		virtual void makeSound() const = 0;
		std::string getType() const;
};

#endif
