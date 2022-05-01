#ifndef WRONGCAT_H
# define WRONGCAT_H

#include "WrongAnimal.hpp"
class WrongCat : public WrongAnimal
{
	public:
	void makeSound(void)const ;
	string getType(void)const;
	WrongCat();
	WrongCat(const WrongCat&);
	WrongCat& operator=(const WrongCat&);
	~WrongCat();
};
ostream& operator<<(const ostream& ,const WrongCat&);
#endif