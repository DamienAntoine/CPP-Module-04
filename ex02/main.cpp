#include "animal.hpp"
#include "cat.hpp"
#include "dog.hpp"

int main()
{
	int count = 0;
	int array_size = 10;
	aAnimal* animals[array_size];
	while (count < (array_size / 2))
	{
		animals[count] = new Dog();
		count++;
	}
	while (count < array_size)
	{
		animals[count] = new Cat();
		count++;
	}

	count = 0;
	while (count < array_size)
	{
		animals[count]->makeSound();
		count++;
	}

	count = 0;
	while (count < array_size)
	{
		delete animals[count];
		count++;
	}

	return 0;
}

/*
int	main()
{
	//not working because pure virtual function
	//aAnimal animal;
	//aAnimal *ptr = new aAnimal();
}*/
