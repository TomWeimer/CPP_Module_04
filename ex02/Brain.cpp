#include "Brain.hpp"
static string randomString(void)
{
	string alphabet = "abcdefghijklmnopqrstuvwxyz";
	string rtn = "";
	for(int i = 0; i < 5; i++)
		rtn += alphabet[rand() % alphabet.size()];
	return(rtn);

}
string Brain::getIdea(int i)const
{
	return (ideas[i]);
}

Brain::Brain(void)
{
	cout << "Brain default constructor" << endl;
	for (int i = 0; i < 100; i++)
		ideas[i] = randomString();
}

Brain::Brain(const Brain& origin)
{
	cout << "Brain copy constructor" << endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = origin.getIdea(i);
}

Brain& Brain::operator=(const Brain& origin)
{
	cout << "Brain assignement operator called!" << endl;
	if (this == &origin)
		return (*this);
	for (int i = 0; i < 100; i++)
		this->ideas[i] = origin.getIdea(i);
	return (*this);
}

Brain::~Brain(void)
{
	cout << "Brain destructor called!" << endl;
}