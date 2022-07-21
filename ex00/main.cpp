#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#define WHITE "\e[1;37m"
#define BLANK "\e[0;30m"
#define RESET "\033[0m"
#define UNDERLINE  "\e[4;37m"

/* int main()
{
	const Animal* dog = new Dog();
	const WrongAnimal* cat = new WrongCat();
	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	dog->makeSound(); //will output the cat sound!
	cat->makeSound();
	...
	return 0;
} */



void test_dog(void)
{
	std::cout << WHITE << "DOG tester:" << WHITE << std::endl;
	std::cout << BLANK << "construction of the dogs:" << RESET << std::endl;
	std::cout << BLANK << "---------------------------------------" << RESET  << std::endl;
	const Animal *bulldog = new Dog();
	const Dog chihuaua;
	std::cout << BLANK << "---------------------------------------" << RESET  << std::endl;
	std::cout << UNDERLINE <<  "The conversation between the bulldog and god:" << RESET <<  std::endl <<  std::endl;
	std::cout << "BULLDOG:	\"Am i really a dog, you know maybe you did a mistake and I'm not?\"" << std::endl;
	std::cout << "GOD:	 	\"You are a " << bulldog->getType() << "!\"" << std::endl <<  std::endl;
	std::cout << UNDERLINE <<  "What does a dog say?:" << RESET <<  std::endl <<  std::endl;
	std::cout << "BULLDOG:	"; bulldog->makeSound();
	std::cout << "CHIHUAHUA:	"; chihuaua.makeSound();
	std::cout << BLANK << "destruction of the dogs:" << RESET << std::endl;
	std::cout << BLANK << "---------------------------------------" << RESET  << std::endl;
	delete(bulldog);
}

void test_cat(void)
{
	std::cout << BLANK << "---------------------------------------" << RESET  << std::endl << std::endl;
	std::cout << WHITE << "CAT tester:" << WHITE << std::endl;
	std::cout << BLANK << "construction of the cats:" << RESET << std::endl;
	std::cout << BLANK << "---------------------------------------" << RESET  << std::endl;
	const Animal *persian = new Cat();
	const Cat sphynx;
	std::cout << BLANK << "---------------------------------------" << RESET  << std::endl;
	std::cout << UNDERLINE <<  "The conversation between the persian and god:" << RESET <<  std::endl <<  std::endl;
	std::cout << "PERSIAN:	\"Am i really a cat, you know maybe you did a mistake and I'm not?\"" << std::endl;
	std::cout << "GOD:	 	\"You are a " << persian->getType() << "!\"" << std::endl <<  std::endl;
	std::cout << UNDERLINE <<  "What does a cat say?:" << RESET <<  std::endl <<  std::endl;
	std::cout << "PERSIAN:	"; persian->makeSound();
	std::cout << "SPHYNX:		"; sphynx.makeSound();
	std::cout << BLANK << "destruction of the cats:" << RESET << std::endl;
	std::cout << BLANK << "---------------------------------------" << RESET  << std::endl;
	delete(persian);
}



void test_WrongAnimal(void)
{
	std::cout << BLANK << "---------------------------------------" << RESET  << std::endl << std::endl;
	std::cout << WHITE << "WrongANIMAL tester:" << WHITE << std::endl;
	std::cout << BLANK << "construction of the WrongCat and the cat:" << RESET << std::endl;
	std::cout << BLANK << "---------------------------------------" << RESET  << std::endl;
	const Animal *PussInBoots = new Cat();
	const WrongAnimal *WillSmith = new WrongCat();
	std::cout << BLANK << "---------------------------------------" << RESET  << std::endl;
	std::cout << UNDERLINE <<  "Do you know the difference between a cat and Will Smith?" << RESET <<  std::endl <<  std::endl;
	std::cout << "CAT:		"; PussInBoots->makeSound();
	std::cout << "WILL SMITH:	"; WillSmith->makeSound();
	std::cout << BLANK << "destruction of the cat and Will Smith:" << RESET << std::endl;
	std::cout << BLANK << "---------------------------------------" << RESET  << std::endl;
	delete(PussInBoots);
	delete(WillSmith);
	std::cout << BLANK << "---------------------------------------" << RESET  << std::endl;

}

void test_leaks()
{
	std::cout << "Test leak dog" << RESET  << std::endl;
	std::cout << BLANK << "---------------------------------------" << RESET  << std::endl;
	const Animal *bulldog = new Dog();
	delete(bulldog);
	std::cout << BLANK << "---------------------------------------" << RESET  << std::endl;

	std::cout << "Test leak cat" << RESET  << std::endl;
	std::cout << BLANK << "---------------------------------------" << RESET  << std::endl;
	const Animal *persian = new Cat();
	delete(persian);
	std::cout << BLANK << "---------------------------------------" << RESET  << std::endl;

	std::cout << "Test leak Will Smith" << RESET  << std::endl;
	std::cout << BLANK << "---------------------------------------" << RESET  << std::endl;
	const WrongAnimal *willSmith = new WrongCat();
	delete(willSmith);
	std::cout << BLANK << "---------------------------------------" << RESET  << std::endl;
}
int main()
{
	Animal lol;
	test_dog();
	test_cat();
	test_WrongAnimal();
	test_leaks();
}

