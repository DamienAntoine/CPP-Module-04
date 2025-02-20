#include "character.hpp"

Character::Character(std::string const& name) : _name(name)
{
	int i = 0;

	while (i < 4)
	{
		this->_inventory[i] = NULL;
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
			delete(this->_inventory[i]);
		i++;
	}
	i = 0;
	while (i < _droppedcount)
	{
		if (this->_floor[i])
			delete(this->_floor[i]);
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
			if (other._inventory[i])
				delete(other._inventory[i]);
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
	int i = 0;

	while (i < 4)
	{
		if (_inventory[i] == NULL)
		{
			_inventory[i] = m;
			break;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx <= 3 && _inventory[idx] != NULL)
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
	if (idx >= 0 && idx <= 3 && this->_inventory[idx] != NULL)
		_inventory[idx]->use(target);
}
