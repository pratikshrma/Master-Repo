#include <iostream>
void counter();
void counter1();
struct printcrap//yaha pe class ke bad (ye nahi lagane hei ) fk kitna dimag kharab kia iske liye
{
	
	void print()
	{
		std::cout<<counter1<<std::endl;
	}
};

int main()
{
	for(int i=0;i<=3;i++)
	{
		//counter();
		counter1();
		}
 
	return 0;
	}
#if 1
void counter()
{
	static int Counter;
	std::cout<<Counter++<<std::endl;
	}
#endif
void counter1()
{
     int Counter1=0;
	std::cout<<Counter1++<<std::endl;
	printcrap p;
	p.print();
	}
//its getting this solution bc after the void counter is over it 
//delete the whole class from the memory and when we again call it it just 
//resets it to zero but in the static bc it is static the pc does no throe it from it memory afer it is 
//used or is completed
//everting inn the memory stays in the memory if static keywoed is used before it;

