#include<stdio.h>
int main()
{ 
	char ch='*';
    printf("\n"); 
    for (int i = 0; i < 8; i++) 
    { 
        printf(" "); 
        { 
            printf("%c%c", ch, ch); 
        } 
        for (int r = 0; r < 6; r++) { 
            if (i == 0 && r < 5) 
                printf("%c", ch); 
            else if (i == 1) 
                printf("%c", ch); 
            else if (i < 4 && i > 0 && r > 3) { 
                printf("%c", ch); 
            } 
  
            else if (i == 4 && r < 5) { 
                printf("%c", ch); 
            } 
            else
                printf(" "); 
        } 
        printf("\n"); 
    } 
} 
