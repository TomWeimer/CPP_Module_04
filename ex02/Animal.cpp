#include "Animal.hpp"

Animal::Animal(void) : type_("default") 
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(std::string newType) : type_(newType) 
{
	std::cout << "Animal named constructor called" << std::endl;
}

Animal::Animal(const Animal& origin) : type_(origin.getType())
{
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& origin)
{
	std::cout << "Animal affection operator called" << std::endl;
	if (this == &origin)
		return (*this);
	this->type_ = origin.getType();
	return(*this);
}

std::string Animal::getType(void)const
{
	std::cout << "Animal getType called" << std::endl;
	return (this->type_);
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
	std::cout << "Destructor Animal called" << std::endl;
}
