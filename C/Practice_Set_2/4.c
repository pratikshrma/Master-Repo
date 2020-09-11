#include<stdio.h>
int main()
{
	//i think one char saves 8 bit of memory means 8 different letters
	//in case of simple gets
	//why fgets is better than gets 
	/*
	 * so first the gets allow user to enter the value past the decleared ampont 
	 * like if you give it 3byte ie 24 bit to write you could only give in the 
	 * multiple of 8 ie 8 16 24 32 ets 
	 * with fgets you can fix that 
	 * 
	 * 
	 * will deal with it latter i mean tommorow by !!
	 * 
	 */ 
	char str[3];
	fgets(str,3,stdin);
	printf("%s",str);
	
	return 0;
}
