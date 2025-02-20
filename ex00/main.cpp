#include "animal.hpp"
#include "wronganimal.hpp"
#include "cat.hpp"
#include "wrongcat.hpp"
#include "dog.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << meta->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	delete i;

	std::cout << std::endl;

	//polymorphic, allocated on heap, manually deleted
	const WrongAnimal* wrongmeta = new WrongAnimal();
	const WrongAnimal* wrongi = new WrongCat();
	std::cout << wrongmeta->getType() << " " << std::endl;
	std::cout << wrongi->getType() << " " << std::endl;
	wrongi->makeSound();
	wrongmeta->makeSound();

	delete wrongmeta;
	delete wrongi;

	std::cout << "\nAdditional Tests:\n\n";

	std::cout << "\ndirect objects tests:\n\n";
	//not polymorphic, allocated on stack, automatically deleted
	Animal directAnimal;
	Dog directDog;
	Cat directCat;

	directDog.makeSound();
	directCat.makeSound();

	std::cout << "\ntesting copies:\n\n";
	Dog originalDog;
	Dog copyDog = originalDog;

	copyDog.makeSound();

	return 0;
}
