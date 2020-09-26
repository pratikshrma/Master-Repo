//https://www.quora.com/What-is-the-use-or-benefit-of-bitwise-operators#:~:text=They%20might%20encode%20an%20integer,%2C%20and%20security%2Fencryption%20operations.
//imp link
//bitwise operator
/*
 * It is same as And operator
 * 0000 1010
 * 0000 0110
 * so the and bitwize operator will be  ie "&"
 * 0000 0010 <--
 * if two bit are diff in the same position then it would be zero other wise one  
 *
 * 
 * NOW or bit wise operator "|"
 * 0000 1010
 * 0000 0110
 * 0000 1110 <--
 * This is or bit wise operation
 * 
 * 
 * Now XOR bit wise operator ie  "^"
 * so the one one will become zero and rest is same as or operator
 * 0000 1010
 * 0000 0110
 * 0000 1100 <--
 * 
 * 
 * now next is NOT operator it will just flip all the bits ~
 * 0000 1010 --> 1111 0101
 * 
 * 
 * now next two is left shift and right shift 
 * 0000 1010 --> (one left shift)-->0001 0100 this is it*/

#include <iostream.h>
#include <stdio.h>
#include <math.h>
void bi(int n) 
{ 
    // array to store binary number 
    int binaryNum[32]; 
  
    // counter for binary array 
    int i = 0; 
    while (n > 0) { 
  
        // storing remainder in binary array 
        binaryNum[i] = n % 2; 
        n = n / 2; 
        i++; 
    } 
  
    // printing binary array in reverse order 
    for (int j = i - 1; j >= 0; j--) 
        cout << binaryNum[j]; 
} 
int main()
{
	bi(15>>2);
	return 0;
}
