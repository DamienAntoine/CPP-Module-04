#ifndef __BRAIN_H__
#define __BRAIN_H__

#include <iostream>

// ************************************************************************** //
//                             Brain     Class                                //
// ************************************************************************** //

class Brain
{
    private:
        std::string ideas[100];

    protected:
        std::string type;

    public:
        Brain();
        Brain(const Brain &copy);
        
        Brain& operator=(const Brain &copy)
        {
            std::cout << "Brain object created" << std::endl;
            if (this != &copy)
            {
                int i = 0;
                while (i < 100)
                {
                    ideas[i] = copy.ideas[i];
                    i++;
                }
            }
            return *this;
        }

        virtual ~Brain();
};

#endif