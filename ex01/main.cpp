#include "Dog.hpp"
#include "Cat.hpp"
#include <iomanip> 
#include <stdlib.h> 

static void	printTitle(std::string title)
{
	std::string	toPrint;
	int	size = 60;
	int	n;

	toPrint = " " + title + " ";
	n = toPrint.size();
	if (n > size)
	{
		toPrint = toPrint.substr(0, size - 2);
		toPrint[size - 4] = '.';
		toPrint[size - 3] = ' ';
		n = toPrint.size();
	}
	std::cout << std::endl << std::setfill('=') << std::setw(size) << "" << std::endl;
	std::cout << std::setw(size / 2) << toPrint.substr(0, n / 2);
	std::cout << toPrint.substr(n / 2, n);
	std::cout << std::setfill('=') << std::setw(size - size / 2 - n + n / 2) << "" << std::endl;
	std::cout << std::setfill('=') << std::setw(size) << "" << std::endl;
}

static void	testLeaks(void)
{
	printTitle("LEAKS");
	const Animal	*dog = new Dog();
	const Animal	*cat = new Cat();

	delete dog;
	delete cat;
}

static void	testSubject(int size)
{
	printTitle("SUBJECT");
	Animal	*arrayAnimals[2 * size];

	for (int i = 0; i < size; i++)
	{
		arrayAnimals[i] = new Dog();
		arrayAnimals[size + i] = new Cat();
	}

	for (int i = 0; i < 2 * size; i++)
		delete arrayAnimals[i];
}

int	main(void)
{
	std::srand((unsigned int)time(NULL));
	testSubject(5);
	testLeaks();
	return (0);
}

/*
int main()
{
const Animal* j = new Dog();
const Animal* i = new Cat();
delete j;//should not create a leak
delete i;
while (1)
{

}
return 0;
}*/