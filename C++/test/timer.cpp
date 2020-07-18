#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void fun()
{
	for(int i=1;i<10000;i++)
	{
	
	std::cout<<i<<std::endl;
	}

}
int main() 
{ 
    /* clock_t clock(void) returns the number of clock ticks 
       elapsed since the program was launched.To get the number  
       of seconds used by the CPU, you will need to divide by  
       CLOCKS_PER_SEC.where CLOCKS_PER_SEC is 1000000 on typical 
       32 bit system.  */
    clock_t start, end; 
  
    /* Recording the starting clock tick.*/
    start = clock(); 
  
    fun(); 
  
    // Recording the end clock tick. 
    end = clock(); 
  
    // Calculating total time taken by the program. 
   double time_taken = double(end - start) / double(CLOCKS_PER_SEC); 
    cout << "Time taken by program is : " << fixed  
         << time_taken << setprecision(10); 
    cout << " sec " << endl; 
    return 0; 
} 

