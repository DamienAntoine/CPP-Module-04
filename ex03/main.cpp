#include "concrete/MateriaSource.hpp"
#include "concrete/character.hpp"
#include "concrete/ice.hpp"
#include "concrete/cure.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	std::cout << "Learning materias..." << std::endl;
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	// can only learn 4
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());
	src->learnMateria(new Ice());
	src->learnMateria(new Ice());
	src->learnMateria(new Ice());

	ICharacter* me = new Character("me");

	// create learned materias
	AMateria* ice1 = src->createMateria("ice");
	AMateria* cure1 = src->createMateria("cure");
	AMateria* unknown = src->createMateria("fire");
	AMateria* ice2 = src->createMateria("ice");
	AMateria* cure2 = src->createMateria("cure");
	AMateria* extra = src->createMateria("ice");
	if (!unknown)
		std::cout << "Unknown materia 'fire' not found." << std::endl;

	// equip materias until inventory is full
	me->equip(ice1);
	me->equip(cure1);
	me->equip(ice2);
	me->equip(cure2);

	// equip when inventory is full
	me->equip(extra);

	std::cout << "\nUsing materias on another character:" << std::endl;
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);
	// test use with invalid index:
	me->use(4, *bob);

	// test unequip
	std::cout << "\nUnequipping materia at index 1 and 3." << std::endl;
	me->displayInventory();
	std::cout << "Removing..." << std::endl;
	me->unequip(1);
	me->unequip(3);
	me->displayInventory();

	std::cout << "Using materias after unequip:" << std::endl;
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(3, *bob);

	// deep copy tests
	std::cout << "\nDeep copy of \"me\"" << std::endl;
	Character* copy = new Character(*(dynamic_cast<Character*>(me)));//must cast to character* bc ICharacter is pure virtual only
	std::cout << "Copy character " << copy->getName() << " created." << std::endl;
	copy->use(0, *bob);

	std::cout << "\nUnequipping index 0 in original character 'me'" << std::endl;
	me->unequip(0);
	std::cout << "Using index 0 in copy (should remain intact):" << std::endl;
	copy->use(0, *bob);
	//inventory of "me" and of "copy":
	me->displayInventory();
	copy->displayInventory();

	delete bob;
	delete me;
	delete copy;
	delete src;

	return 0;
}
