#include <iostream>
using namespace std;
void printarray(int thearray[],int sizeofarray);

int main()
{
	int aman[3]={53,64,62};
	int jessica[6]={64,74,86,723,84,763};
	printarray(jessica,6);
		return 0;
}

void printarray(int thearray[],int sizeofarray)
{
		for(int x=0;x<sizeofarray;x++)
		cout<< thearray[x]<<endl;
	
	}
