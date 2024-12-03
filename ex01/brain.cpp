#include "brain.hpp"

Brain::Brain()
{
    std::cout << "Brain object created" << std::endl;
}

Brain::Brain(const Brain &copy)
{
    int i = 0;

    std::cout << "Brain object created" << std::endl;
    while (i < 100)
    {
        ideas[i] = copy.ideas[i];
        i++;
    }
}

Brain::~Brain()
{
    std::cout << "Brain object destroyed" << std::endl;
}