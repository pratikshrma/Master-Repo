#include <iostream> 
int main() 
{ 
int *i, *j; 
int *ii = 0, *jj = nullptr; //nullptr,NULL,0(zero inpointer context not in integer context)are aLL same
if(i == j) 
{ 
printf("This might get printed if both i and j are same by chance."); 
} 
if(ii == jj) 
{ 
printf("This is always printed coz ii and jj are same."); 
} 
return 0; 
} 
