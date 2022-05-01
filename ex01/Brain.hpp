#ifndef BRAIN_H
# define BRAIN_H

#include <iostream>


using namespace std;
class Brain
{
	private:
	string ideas[100];
	public:
	Brain(void);
	Brain(const Brain&);
	~Brain(void);
	Brain& operator=(const Brain&);
	string getIdea(int i)const;
	
};
#endif