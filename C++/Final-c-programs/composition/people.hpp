#ifndef PEOPLE_HPP
#define PEOPLE_HPP

#include <string>
#include "birthday.hpp"


class people
{
	public:
		people(std::string x,birthday bo);
		void printinfo();
			
	private:
	std::string name;
	birthday dateofbirth;
		
};

#endif /* PEOPLE_HPP */ 
