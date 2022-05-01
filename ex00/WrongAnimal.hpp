#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

#include <iostream>

using namespace std;
class WrongAnimal
{
	protected:
	string type_;
	public:
	virtual void makeSound(void)const ;
	string getType(void)const;
	WrongAnimal();
	WrongAnimal(string name);
	WrongAnimal(const WrongAnimal&);
	WrongAnimal& operator=(const WrongAnimal&);
	~WrongAnimal();
};
ostream& operator<<(const ostream& ,const WrongAnimal&);
#endif