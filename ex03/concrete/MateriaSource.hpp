#ifndef __MATERIASOURCE__
#define __MATERIASOURCE__

#include "../base/IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria* _templates[4];
	public:

		MateriaSource();
		MateriaSource(const MateriaSource& other);
		~MateriaSource();

		MateriaSource& operator=(const MateriaSource& other);

		virtual void learnMateria(AMateria*);
		virtual AMateria* createMateria(std::string const & type);
};

#endif
