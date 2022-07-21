#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

#include <iostream>

class WrongAnimal
{
	protected:
	std::string _type;
	public:
	void makeSound(void)const ;
	std::string getType(void)const;
	WrongAnimal();
	WrongAnimal(std::string name);
	WrongAnimal(const WrongAnimal&);
	WrongAnimal& operator=(const WrongAnimal&);
	~WrongAnimal();
};
std::ostream& operator<<(const std::ostream& ,const WrongAnimal&);
#endif