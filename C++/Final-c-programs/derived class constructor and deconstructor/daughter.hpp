#ifndef DAUGHTER_HPP
#define DAUGHTER_HPP
#include "mother.hpp"


class daughter: public mother/*whenever using inheritance it invokes the base 
								class first befor doing anything 
								* it says ok i need something from mother 
								* dont know what but i do i will invoke it */
{
	public:
	daughter();
	~daughter();
};

#endif /* DAUGHTER_HPP */ 
