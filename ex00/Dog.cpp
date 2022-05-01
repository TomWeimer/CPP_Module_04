#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
	type_ = "Dog";
	cout << "Dog default constructor called" << endl;
}

Dog::Dog(const Dog& origin) : Animal (origin)
{
	type_ = "Dog";
	cout << "Dog copy constructor called" << endl;
}

Dog& Dog::operator=(const Dog& origin)
{
	cout << "Dog affection operator called" << endl;
	if (this == &origin)
		return (*this);
	this->type_ = origin.getType();
	return(*this);
}

string Dog::getType(void)const
{
	cout << "Dog getType called" << endl;
	return (this->type_);
}
void Dog::makeSound(void)const 
{
	cout << "Woof Woof!" << endl;
}

ostream& operator<<(ostream& out ,const Dog& Dog)
{
	out << Dog.getType();
	return (out);
}

Dog::~Dog(void)
{
	cout << "Destructor Dog called" << endl;
}
