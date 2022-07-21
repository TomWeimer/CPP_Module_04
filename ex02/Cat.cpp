#include "Cat.hpp"

Cat::Cat(void) : Animal(), brain_(new Brain)
{
	type_ = "Cat";
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat& origin) : Animal (origin), brain_(new Brain)
{
	type_ = "Cat";
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& origin)
{
	std::cout << "Cat affection operator called" << std::endl;
	if (this == &origin)
		return (*this);
	this->type_ = origin.getType();
	return(*this);
}

std::string Cat::getType(void)const
{
	
	std::cout << "Cat getType called" << std::endl;
	return (this->type_);
}
void Cat::makeSound(void)const 
{
	std::cout << "Meeeeoooowwww!" << std::endl;
}

std::ostream& operator<<(std::ostream& out ,const Cat& Cat)
{
	out << Cat.getType();
	return (out);
}

Cat::~Cat(void)
{
	std::cout << "Destructor Cat called" << std::endl;
	delete brain_;
}
void Cat::printIdea(void)const
{
	std::cout << this->brain_->getIdea(0) << std::endl;
}
