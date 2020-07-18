#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Loop()
{
	public:
	loop()
	{
		for(int i=0;i<1000000;i++)
		{
			cout<<i<<enbl;
			}
		
		}
	}

int main() 
{
    clock_t start, end; 
  
    start = clock(); 
  
    Loop loopobj;
    loopobj.loop();  
    end = clock(); 
 
   double time_taken = double(end - start) / double(CLOCKS_PER_SEC); 
    cout << "Time taken by program is : " << fixed  
         << time_taken << setprecision(5); 
    cout << " sec " << endl; 
    return 0; 
} 

