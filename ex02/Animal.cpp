#include "Animal.hpp"

Animal::Animal(void) : type_("default") 
{
	cout << "Animal default constructor called" << endl;
}

Animal::Animal(string newType) : type_(newType) 
{
	cout << "Animal named constructor called" << endl;
}

Animal::Animal(const Animal& origin) : type_(origin.getType())
{
	cout << "Animal copy constructor called" << endl;
}

Animal& Animal::operator=(const Animal& origin)
{
	cout << "Animal affection operator called" << endl;
	if (this == &origin)
		return (*this);
	this->type_ = origin.getType();
	return(*this);
}

string Animal::getType(void)const
{
	cout << "Animal getType called" << endl;
	return (this->type_);
}


ostream& operator<<(ostream& out ,const Animal& animal)
{
	out << animal.getType();
	return (out);
}

void Animal::makeSound(void)const 
{
	cout << "*Undefined*" << endl;
}

Animal::~Animal(void)
{
	cout << "Destructor Animal called" << endl;
}
