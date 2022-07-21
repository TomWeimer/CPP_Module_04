#include "Animal.hpp"
#define PURPLE "\e[1;35m"
#define RESET "\033[0m"


Animal::Animal(void) : _type("default") 
{
	std::cout << PURPLE << "Animal default constructor called" << RESET << std::endl;
}

Animal::Animal(std::string newType) : _type(newType) 
{
	std::cout << PURPLE << "Animal named constructor called"<< RESET  << std::endl;
}

Animal::Animal(const Animal& origin) : _type(origin.getType())
{
	std::cout << PURPLE << "Animal copy constructor called" << RESET << std::endl;
}

Animal& Animal::operator=(const Animal& origin)
{
	std::cout << PURPLE << "Animal affection operator called" << RESET << std::endl;
	if (this == &origin)
		return (*this);
	this->_type = origin.getType();
	return(*this);
}

std::string Animal::getType(void)const
{
	return (this->_type);
}


std::ostream& operator<<(std::ostream& out ,const Animal& animal)
{
	out << animal.getType();
	return (out);
}

void Animal::makeSound(void)const 
{
	std::cout << "*Undefined*" << std::endl;
}

Animal::~Animal(void)
{
	std::cout << PURPLE << "Destructor Animal called" << RESET << std::endl;
}
