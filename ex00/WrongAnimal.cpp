#include "WrongAnimal.hpp"
#define RED "\e[1;31m"
#define RESET "\033[0m"


WrongAnimal::WrongAnimal(void) : _type("default") 
{
	std::cout << RED << "WrongAnimal default constructor called" << RESET << std::endl;
}

WrongAnimal::WrongAnimal(std::string newType) : _type(newType) 
{
	std::cout << RED << "WrongAnimal named constructor called"<< RESET  << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& origin) : _type(origin.getType())
{
	std::cout << RED << "WrongAnimal copy constructor called" << RESET << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& origin)
{
	std::cout << RED << "WrongAnimal affection operator called" << RESET << std::endl;
	if (this == &origin)
		return (*this);
	this->_type = origin.getType();
	return(*this);
}

std::string WrongAnimal::getType(void)const
{
	return (this->_type);
}

std::ostream& operator<<(std::ostream& out ,const WrongAnimal& animal)
{
	out << animal.getType();
	return (out);
}

void WrongAnimal::makeSound(void)const 
{
	std::cout << "👤 does: GET MY WIFE NAME OUT OF YOUR ******* MOUTH!" << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << RED << "Destructor WrongAnimal called" << RESET << std::endl;
}