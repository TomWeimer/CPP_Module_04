#ifndef ANIMAL_H
# define ANIMAL_H

#include <iostream>

using namespace std;
class Animal
{
	protected:
	string type_;
	public:
	virtual void makeSound(void)const = 0;
	string getType(void)const;
	Animal();
	Animal(string name);
	Animal(const Animal&);
	Animal& operator=(const Animal&);
	virtual ~Animal();
};
ostream& operator<<(const ostream& ,const Animal&);
#endif