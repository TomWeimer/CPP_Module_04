#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
	type_ = "Cat";
	cout << "Cat default constructor called" << endl;
}

Cat::Cat(const Cat& origin) : Animal (origin)
{
	type_ = "Cat";
	cout << "Cat copy constructor called" << endl;
}

Cat& Cat::operator=(const Cat& origin)
{
	cout << "Cat affection operator called" << endl;
	if (this == &origin)
		return (*this);
	this->type_ = origin.getType();
	return(*this);
}

string Cat::getType(void)const
{
	
	cout << "Cat getType called" << endl;
	return (this->type_);
}
void Cat::makeSound(void)const 
{
	cout << "Meeeeoooowwww!" << endl;
}

ostream& operator<<(ostream& out ,const Cat& Cat)
{
	out << Cat.getType();
	return (out);
}

Cat::~Cat(void)
{
	cout << "Destructor Cat called" << endl;
}
