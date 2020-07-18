#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main()
{
	srand(time(0));/*random no generator is not random its it is a complicated function so 
	"srand" adds a number and that changes the entire function*/
	for(int i=1;i<=25;i++)
	{
	cout << 1+ (rand()%6)<<endl; /*agar remainder 6 se bda hua like seven 
								to uska fir remainder aai ga to seven ka ans one a jai ga*/
    }

	}
