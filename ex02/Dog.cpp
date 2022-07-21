#include "Dog.hpp"

Dog::Dog(void) : Animal(), brain_(new Brain)
{
	type_ = "Dog";
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog& origin) : Animal (origin), brain_(new Brain)
{
	type_ = "Dog";
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& origin)
{
	std::cout << "Dog affection operator called" << std::endl;
	if (this == &origin)
		return (*this);
	this->type_ = origin.getType();
	return(*this);
}

std::string Dog::getType(void)const
{
	std::cout << "Dog getType called" << std::endl;
	return (this->type_);
}
void Dog::makeSound(void)const 
{
	std::cout << "Woof Woof!" << std::endl;
}

std::ostream& operator<<(std::ostream& out ,const Dog& Dog)
{
	out << Dog.getType();
	return (out);
}

Dog::~Dog(void)
{
	std::cout << "Destructor Dog called" << std::endl;
	delete brain_;
}

void Dog::printIdea(void)const
{
	std::cout << this->brain_->getIdea(0) << std::endl;
}