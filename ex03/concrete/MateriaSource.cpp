#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	int i = 0;
	while (i < 4)
	{
		_templates[i] = NULL;
		i++;
	}
	std::cout << "MateriaSource default constructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
	int i = 0;
	while (i < 4)
	{
		if (other._templates[i])
			_templates[i] = other._templates[i]->clone();
		else
			_templates[i] = NULL;
		i++;
	}
}

MateriaSource::~MateriaSource()
{
	int i = 0;

	while (i < 4)
	{
		if (_templates[i])
			delete _templates[i];
		i++;
	}
	std::cout << "MateriaSource destructor called" << std::endl;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other)
{
	int	i = 0;
	if (this != &other)
	{
		while (i < 4)
		{
			if (_templates[i])
				delete _templates[i];
			i++;
		}
		i = 0;
		while (i < 4)
		{
			if (other._templates[i])
				_templates[i] = other._templates[i]->clone();
			else
				_templates[i] = NULL;
			i++;
		}
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria* materia)
{
	int i = 0;

	if (!materia)
		return;

	while (i < 4)
	{
		if (_templates[i] == NULL)
		{
			_templates[i] = materia;
			return;
		}
		i++;
	}
	delete materia;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	int i = 0;

	while (i < 4)
	{
		if (_templates[i] && _templates[i]->getType() == type)
			return _templates[i]->clone();
		i++;
	}
	return NULL;
}
