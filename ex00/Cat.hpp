#ifndef CAT_H
# define CAT_H

#include "Animal.hpp"
class Cat : public Animal
{
	public:
	void makeSound(void)const ;
	Cat();
	Cat(const Cat&);
	Cat& operator=(const Cat&);
	~Cat();
};
std::ostream& operator<<(const std::ostream& ,const Cat&);
#endif