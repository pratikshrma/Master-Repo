#include <stdio.h>
int main()
{
	char ch;
	printf("Enter a Character:- ");
	scanf("%c",&ch);
	if(ch>=65&&ch<=90)
	{
		 ch=(int)ch+32;
	}
	switch(ch){
		case 'a':
			printf("vowel");
			break;
		case 'e':
			printf("vowel");
			break;
		case 'i':
			printf("vowel");
			break;
		case 'o':
			printf("vowel");
			break;
		case 'u':
			printf("vowel");
			break;
		default:
			printf("Consonant");
			break;
	}
	return 0;
}
