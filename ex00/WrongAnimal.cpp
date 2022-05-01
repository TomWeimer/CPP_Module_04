#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : type_("WrongAnimal") 
{
	cout << "WrongAnimal default constructor called" << endl;
}

WrongAnimal::WrongAnimal(string newType) : type_(newType) 
{
	cout << "WrongAnimal named constructor called" << endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& origin) : type_(origin.getType())
{
	cout << "WrongAnimal copy constructor called" << endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& origin)
{
	cout << "WrongAnimal affection operator called" << endl;
	if (this == &origin)
		return (*this);
	this->type_ = origin.getType();
	return(*this);
}

string WrongAnimal::getType(void)const
{
	cout << "WrongAnimal getType called" << endl;
	return (this->type_);
}
void WrongAnimal::makeSound(void)const {}

ostream& operator<<(ostream& out ,const WrongAnimal& WrongAnimal)
{
	out << WrongAnimal.getType();
	return (out);
}

WrongAnimal::~WrongAnimal(void)
{
	cout << "Destructor WrongAnimal called" << endl;
}
