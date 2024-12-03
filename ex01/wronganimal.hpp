#ifndef __WRONGANIMAL_H__
#define __WRONGANIMAL_H__

#include <iostream>

// ************************************************************************** //
//                         WrongAnimal   Class                                //
// ************************************************************************** //

class WrongAnimal
{
    protected:
        std::string type;

    public:
        WrongAnimal();
        
        ~WrongAnimal();
        void    makeSound() const;

        std::string     getType() const;
};

#endif