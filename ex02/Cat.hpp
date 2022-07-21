#ifndef CAT_H
# define CAT_H

#include "Animal.hpp"
#include "Brain.hpp"
class Cat : public Animal
{
	private:
		Brain *brain_;
	public:
	virtual void makeSound(void)const ;
	std::string getType(void)const;
	Cat();
	Cat(const Cat&);
	Cat& operator=(const Cat&);
	virtual ~Cat();
	void printIdea(void)const;
};
std::ostream& operator<<(const std::ostream& ,const Cat&);
#endif