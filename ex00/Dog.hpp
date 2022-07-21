#ifndef DOG_H
# define DOG_H

#include "Animal.hpp"
class Dog : public Animal
{
	public:
	void makeSound(void)const ;
	Dog();
	Dog(const Dog&);
	Dog& operator=(const Dog&);
	~Dog();
};
std::ostream& operator<<(const std::ostream& ,const Dog&);
#endif