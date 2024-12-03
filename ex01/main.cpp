#include "animal.hpp"
#include "cat.hpp"
#include "dog.hpp"
#include "wronganimal.hpp"
#include "wrongcat.hpp"

int main()
{
    int i = 0;
    int arraysize = 10;

    const Animal* animals[arraysize];
    while (i < arraysize / 2)
    {
        animals[i] = new Dog();
        i++;
    }
    while (i < arraysize)
    {
        animals[i] = new Cat();
        i++;
    }

    i = 0;
    while (i < arraysize)
    {
        std::cout << animals[i]->getType() << " ";
        animals[i]->makeSound();
        i++;
    }

    i = 0;
    while (i < arraysize)
    {
        delete animals[i];
        i++;
    }

    return 0;
}