#ifndef WRONGCAT_H
# define WRONGCAT_H

#include "WrongAnimal.hpp"
class WrongCat : public WrongAnimal
{
	public:
	void makeSound(void)const ;
	WrongCat();
	WrongCat(const WrongCat&);
	WrongCat& operator=(const WrongCat&);
	~WrongCat();
};
std::ostream& operator<<(const std::ostream& ,const WrongCat&);
#endif