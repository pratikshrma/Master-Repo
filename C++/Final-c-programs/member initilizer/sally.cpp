#include "sally.hpp"
#include <iostream>
using namespace std;



sally::sally(int a,int b)
:regvar(a),
constvar(b)						/*it tells that we will be 
{							working with member inatilizer syntex
							* ye sari harkate is liye karni padi kyuki ham constant variable ke sath khel rahe tha 
							* uska use pata ni search karna pda ga
}							* The idea of const functions is not to allow them to modify the object on which they are called.
							* idk is line ka matlab kya he abhi*/

void sally::print()
{
	cout<<"regular var is: "<<regvar<<" const var is : "<<constvar<<endl;
	}
 
