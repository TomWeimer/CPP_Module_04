#ifndef DOG_H
# define DOG_H

#include "Animal.hpp"
class Dog : public Animal
{
	public:
	virtual void makeSound(void)const ;
	string getType(void)const;
	Dog();
	Dog(const Dog&);
	Dog& operator=(const Dog&);
	~Dog();
};
ostream& operator<<(const ostream& ,const Dog&);
#endif