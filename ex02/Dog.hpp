#ifndef DOG_H
# define DOG_H

#include "Animal.hpp"
#include "Brain.hpp"
class Dog : public Animal
{
	private:
		Brain *brain_;
	public:
	virtual void makeSound(void)const ;
	std::string getType(void)const;
	Dog();
	Dog(const Dog&);
	Dog& operator=(const Dog&);
	virtual ~Dog();
	void printIdea(void)const;
};
std::ostream& operator<<(const std::ostream& ,const Dog&);
#endif