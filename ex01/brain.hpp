#ifndef __BRAIN_H__
#define __BRAIN_H__

#include <iostream>


// ************************************************************************** //
//                              Brain      Class                              //
// ************************************************************************** //

class Brain
{
	private:
		std::string ideas[100];
	public:
		Brain();
        Brain(const Brain& other);

        Brain& operator=(const Brain& other);

		~Brain();
};

#endif
