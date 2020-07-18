#include <iostream>
using namespace std;
int main()
{
	int fish = 5; 
   cout<<&fish<<endl;//add & sign to print the memory address of the fish
   
 /*memory address ko har kahini store karna hei "*" ye btn eke liye hei ki 
						isme memory address store karna hei*/
  int *fishpointer = &fish;
   cout <<fishpointer<<endl;

	return 0;
}
