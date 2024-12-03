#ifndef __ANIMAL_H__
#define __ANIMAL_H__

#include <iostream>

// ************************************************************************** //
//                             Animal    Class                                //
// ************************************************************************** //

class Animal
{
    protected:
        std::string type;

    public:
        Animal();
        
        virtual         ~Animal();
        virtual void    makeSound() const;

        std::string     getType() const;
};

#endif