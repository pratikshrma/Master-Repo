#include <iostream>//this is for how to add data to the file and read that from the file 
#include <fstream>//this header file id for storing in hard drive?
using namespace std;

int main()
{
	ofstream buckyfile;	//this is how you create file object
	buckyfile.open("tuna.txt");
	buckyfile<<"i love tuna and tuna loves me \n";
	buckyfile.close();
	
	
	return 0;
	}
