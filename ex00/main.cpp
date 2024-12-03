#include "animal.hpp"
#include "cat.hpp"
#include "dog.hpp"
#include "wronganimal.hpp"
#include "wrongcat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;

    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();

    delete meta;
    delete j;
    delete i;

    std::cout << std::endl;

    const WrongAnimal *wrongmeta = new WrongAnimal();
    const WrongAnimal *k = new WrongCat();

    std::cout << k->getType() << " " << std::endl;

    k->makeSound();
    wrongmeta->makeSound();

    delete wrongmeta;
    delete k;

    return 0;
}