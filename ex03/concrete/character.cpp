#include "../base/AMateria.hpp"
#include "../base/ICharacter.hpp"
#include "character.hpp"

Character::Character(std::string const& name) : _name(name), _droppedcount(0)
{
	int i = 0;

	while (i < 4)
	{
		this->_inventory[i] = NULL;
		i++;
	}

    i = 0;
    while (i < FLOORSIZE)
    {
        this->_floor[i] = NULL;
        i++;
    }

	std::cout << "Character " << this->_name << " created." << std::endl;
}

Character::~Character()
{
	int i = 0;
	while (i < 4)
	{
		if (this->_inventory[i] != NULL)
        {
			delete(this->_inventory[i]);
            this->_inventory[i] = NULL;
        }
		i++;
	}
	i = 0;
	while (i < _droppedcount)
	{
		if (this->_floor[i])
        {
			delete(this->_floor[i]);
            this->_floor[i] = NULL;
        }
		i++;
	}
	std::cout << "Character " << this->_name << " destroyed." << std::endl;
}

Character::Character(const Character& other) : _name(other._name)
{
	int i = 0;
	while (i < 4)
	{
		this->_inventory[i] = NULL;
		i++;
	}

	i = 0;
	while (i < 4)
	{
		if (other._inventory[i])
			this->_inventory[i] = other._inventory[i]->clone();
		i++;
	}

	std::cout << "Character copy constructor called" << std::endl;
}

Character& Character::operator=(const Character& other)
{
	if (this != &other)
	{
		int i = 0;
		while (i < 4)
		{
			if (this->_inventory[i])
				delete(this->_inventory[i]);
			i++;
		}
		this->_name = other._name;

		i = 0;
		while (i < 4)
		{
			if (other._inventory[i])
				this->_inventory[i] = other._inventory[i]->clone();
			else
				this->_inventory[i] = NULL;
			i++;
		}
	}
	return *this;
}

std::string const & Character::getName() const
{
	return (this->_name);
}

void Character::equip(AMateria* m)
{
    std::cout << "entered equip function" << std::endl;
    if (m == NULL)
    {
        return ;
    }

	int i = 0;

	while (i < 4)
	{
		if (_inventory[i] == NULL)
		{
			_inventory[i] = m;
            std::cout << "Equipped " << m->getType() << " at slot " << i << std::endl;
			break;
		}
        i++;
	}
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4 && _inventory[idx] != NULL)
	{
		if (_droppedcount < FLOORSIZE)
		{
			_floor[_droppedcount++] = _inventory[idx];
			_inventory[idx] = NULL;
		}
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && this->_inventory[idx] != NULL)
		_inventory[idx]->use(target);
}
