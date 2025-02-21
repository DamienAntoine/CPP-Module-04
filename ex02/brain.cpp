#include "brain.hpp"

Brain::Brain()
{
	std::cout << "Brain created" << std::endl;
}

Brain::Brain(const Brain& other)
{
    int i = 0;
    while (i < 100)
    {
        this->ideas[i] = other.ideas[i];
        i++;
    }
}

Brain& Brain::operator=(const Brain& other)
{
    int i = 0;
    if (this != &other)
    {
        while (i < 100)
        {
            this->ideas[i] = other.ideas[i];
            i++;
        }
    }
    return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain destroyed" << std::endl;
}
