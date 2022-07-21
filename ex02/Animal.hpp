#ifndef ANIMAL_H
# define ANIMAL_H

#include <iostream>

class Animal
{
	protected:
	std::string type_;
	public:
	virtual void makeSound(void)const = 0;
	std::string getType(void)const;
	Animal();
	Animal(std::string name);
	Animal(const Animal&);
	Animal& operator=(const Animal&);
	virtual ~Animal();
};
std::ostream& operator<<(const std::ostream& ,const Animal&);
#endif