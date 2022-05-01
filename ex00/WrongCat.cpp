#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal()
{
	type_ = "WrongCat";
	cout << "WrongCat default constructor called" << endl;
}

WrongCat::WrongCat(const WrongCat& origin) : WrongAnimal (origin)
{
	type_ = "WrongCat";
	cout << "WrongCat copy constructor called" << endl;
}

WrongCat& WrongCat::operator=(const WrongCat& origin)
{
	cout << "WrongCat affection operator called" << endl;
	if (this == &origin)
		return (*this);
	this->type_ = origin.getType();
	return(*this);
}

string WrongCat::getType(void)const
{
	cout << "WrongCat getType called" << endl;
	return (this->type_);
}
void WrongCat::makeSound(void)const 
{
	cout << "Meeeeoooowwww!" << endl;
}

ostream& operator<<(ostream& out ,const WrongCat& WrongCat)
{
	out << WrongCat.getType();
	return (out);
}

WrongCat::~WrongCat(void)
{
	cout << "Destructor WrongCat called" << endl;
}
