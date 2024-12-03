#ifndef __DOG_H__
#define __DOG_H__

#include <iostream>
#include "animal.hpp"
#include "brain.hpp"

// ************************************************************************** //
//                             Dog       Class                                //
// ************************************************************************** //

class Dog : public Animal
{
    private:
        Brain* brain;

    public:
        Dog() : brain(new Brain())
        {
            type = "Dog";
            std::cout << "Dog object created" << std::endl;
        }

        Dog(const Dog &copy) : Animal(copy), brain(new Brain(*copy.brain))
        {
            type = "Dog";
            std::cout << "Dog object created" << std::endl;
        }

        Dog& operator=(const Dog &copy)
        {
            std::cout << "Dog object created" << std::endl;
            if (this != &copy)
            {
                Animal::operator=(copy);
                *brain = *copy.brain;
            }
            return *this;
        }

        virtual ~Dog()
        {
            delete brain;
            std::cout << "Dog object destroyed" << std::endl;
        }

        void makeSound() const override;
};

#endif