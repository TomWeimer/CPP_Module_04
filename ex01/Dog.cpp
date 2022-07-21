#include "Dog.hpp"
#define BLUE  "\e[1;34m"
#define RESET "\033[0m"

Dog::Dog(void) : Animal()
{
	_type = "Dog";
	std::cout << BLUE << "	Dog " << RESET << "default constructor called" << std::endl;
	_brain = new Brain();
}

Dog::Dog(const Dog& origin) : Animal (origin)
{
	_type = "Dog";
	std::cout << BLUE << "	Dog " << RESET << "copy constructor called" << std::endl;
	_brain = origin._brain;
}

Dog& Dog::operator=(const Dog& origin)
{
	std::cout << BLUE << "	Dog " << RESET << "assignement operator called" << std::endl;
	if (this == &origin)
		return (*this);
	this->_type = origin.getType();
	this->_brain = origin._brain;
	return(*this);
}

void Dog::makeSound(void)const 
{
	std::cout << "🐩 does:	Woof Woof woof!" << std::endl;
}

std::ostream& operator<<(std::ostream& out ,const Dog& Dog)
{
	out << Dog.getType();
	return (out);
}

Dog::~Dog(void)
{
	std::cout << BLUE << "	Dog " << RESET  << "Destructor called" << std::endl;
	delete (_brain);
}
