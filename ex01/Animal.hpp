#ifndef ANIMAL_H
# define ANIMAL_H

#include <iostream>

class Animal
{
	protected:
	std::string _type;
	public:
	std::string getType(void)const;
	virtual void makeSound(void)const;
	Animal();
	Animal(std::string name);
	Animal(const Animal&);
	Animal& operator=(const Animal&);
	virtual ~Animal();
};
std::ostream& operator<<(const std::ostream& ,const Animal&);
#endif