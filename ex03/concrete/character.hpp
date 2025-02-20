#ifndef __CHARACTER__
#define __CHARACTER__

#define FLOORSIZE 100

#include "../base/ICharacter.hpp"

class Character : public ICharacter
{
	private:
		std::string			_name;
		AMateria*			_inventory[4];
		static AMateria*	_floor[FLOORSIZE];
		static int			_droppedcount;

	public:
		Character(std::string const& name);
		Character(const Character& other);
		~Character();

		Character& operator=(const Character& other);

		std::string const & getName() const override;
		void equip(AMateria* m) override;
		void unequip(int idx) override;
		void use(int idx, ICharacter& target) override;
};

#endif
