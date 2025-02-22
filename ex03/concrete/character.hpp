#ifndef __CHARACTER__
#define __CHARACTER__

#define FLOORSIZE 100

#include "../base/ICharacter.hpp"

class Character : public ICharacter
{
	private:
		std::string			_name;
		AMateria*			_inventory[4];
		AMateria*	_floor[FLOORSIZE];
		int			_droppedcount;

	public:
		Character(std::string const& name);
		Character(const Character& other);
		~Character();

		Character& operator=(const Character& other);

		std::string const & getName() const;
		void displayInventory() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target) ;
};

#endif
