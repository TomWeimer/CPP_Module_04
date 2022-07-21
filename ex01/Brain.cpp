#include "Brain.hpp"
static std::string randomString(void)
{
	std::string alphabet = "abcdefghijklmnopqrstuvwxyz";
	std::string rtn = "";
	for(int i = 0; i < 5; i++)
		rtn += alphabet[std::rand() % alphabet.size()];
	return(rtn);

}
std::string Brain::getIdea(int i)const
{
	return (ideas[i]);
}

Brain::Brain(void)
{
	std::cout << "Brain default constructor" << std::endl;
	for (int i = 0; i < 100; i++)
		ideas[i] = randomString();
}

Brain::Brain(const Brain& origin)
{
	std::cout << "Brain copy constructor" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = origin.getIdea(i);
}

Brain& Brain::operator=(const Brain& origin)
{
	std::cout << "Brain assignement operator called!" << std::endl;
	if (this == &origin)
		return (*this);
	for (int i = 0; i < 100; i++)
		this->ideas[i] = origin.getIdea(i);
	return (*this);
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called!" << std::endl;
}