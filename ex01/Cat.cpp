#include "Cat.hpp"
#define GREEN "\e[1;32m"
#define RESET "\033[0m"
Cat::Cat(void) : Animal()
{
	_type = "Cat";
	std::cout << GREEN << "	Cat " << RESET << "default constructor called" << std::endl;
	_brain = new Brain();
}

Cat::Cat(const Cat& origin) : Animal (origin)
{
	_type = "Cat";
	std::cout << GREEN << "	Cat " << RESET << "copy constructor called" << std::endl;
	_brain = origin._brain;
}

Cat& Cat::operator=(const Cat& origin)
{
	std::cout << GREEN << "	Cat " << RESET << "assignement operator called" << std::endl;
	if (this == &origin)
		return (*this);
	this->_type = origin.getType();
	this->_brain = origin._brain;
	return(*this);
}

void Cat::makeSound(void)const 
{
	std::cout << "🐈 does:	Meeeeoooowwww!" << std::endl;
}

std::ostream& operator<<(std::ostream& out ,const Cat& Cat)
{
	out << Cat.getType();
	return (out);
}

Cat::~Cat(void)
{
	std::cout << GREEN << "	Cat " << RESET << "Destructor Cat called" << std::endl;
	delete (_brain);
}
