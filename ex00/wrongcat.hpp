#ifndef __WRONGCAT_H__
#define __WRONGCAT_H__

#include <iostream>
#include "wronganimal.hpp"

// ************************************************************************** //
//                             WrongCat  Class                                //
// ************************************************************************** //

class WrongCat : public WrongAnimal
{
    public:
        WrongCat();
        ~WrongCat();

        void makeSound() const;
};

#endif