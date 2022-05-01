#ifndef CAT_H
# define CAT_H

#include "Animal.hpp"
class Cat : public Animal
{
	public:
	virtual void makeSound(void)const ;
	string getType(void)const;
	Cat();
	Cat(const Cat&);
	Cat& operator=(const Cat&);
	~Cat();
};
ostream& operator<<(const ostream& ,const Cat&);
#endif