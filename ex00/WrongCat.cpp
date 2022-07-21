#include "WrongCat.hpp"
#define ORANGE "\e[1;33m"
#define RESET "\033[0m"
WrongCat::WrongCat(void) : WrongAnimal()
{
	_type = "WrongCat";
	std::cout << ORANGE << "	WrongCat " << RESET <<  "default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& origin) : WrongAnimal (origin)
{
	_type = "WrongCat";
	std::cout << ORANGE << "	WrongCat " << RESET << "copy constructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& origin)
{
	std::cout << ORANGE << "	WrongCat " << RESET << "affection operator called" << std::endl;
	if (this == &origin)
		return (*this);
	this->_type = origin.getType();
	return(*this);
}


void WrongCat::makeSound(void)const 
{
	std::cout << "Meeeeoooowwww!" << std::endl;
}

std::ostream& operator<<(std::ostream& out ,const WrongCat& WrongCat)
{
	out << WrongCat.getType();
	return (out);
}

WrongCat::~WrongCat(void)
{
	std::cout << ORANGE << "	WrongCat " << RESET << "Destructor called" << std::endl;
}
