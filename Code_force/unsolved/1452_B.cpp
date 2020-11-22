// to bhai ke hisab se 1 condition hei ki 
// 1> Sum to be a multiple of n-1 ok
// 2> the sum needs to be atleast biggest value in (a * n-1)


/*
0 0 0 100  so here you can see why we want n-1 to be a muliple of sum bc it aint gonna divide into three section

NOW SECOND
now supose we select 100 and now we need to divide
max element in the array stays 100 or below kyuki varna to ham usko kahi balance hi nahi kar paige 

100 100 0 100 thk hei
100 40 60 100 thk hei
101 39 60 100 hua to fk ho jai ga kyuki ab 101 ka kya karna ye to kahi ni jane vala 


iska solution vse to aa gaya hoga codeforce pa par agar nahi aaya hei to twitch pe hei NEALWU karke code force
education round 98 Best of luck future me!  I am back thoda sa or try kar hi leta hei


+++++++++++++++++++++++++++++++++
A-Array
Sum(A)=20
1 3 7 9



sum(A)<A[n-1] * (n-1)   if this is the case then we are never good  lets say we take 3 and now the sum is not 
						big enough to cover till 9

4 7 9 

and now the other case is:-

sum(A)>=A[n-1] * (n-1)
sum(A is a multiple of (n-1)

then we can do the operation bc

sum(A)=x*(n-1)
x>=A[n-1]

[x,x,x,....,x]
x*(n-1) coppies of x

6 7 8 9
Sum(A)=30

 6 8 9
+4 3 1 ->7
 
 10 10 10


+++++++++++++++++++++++++++++++++


THK HEI YE THODA BAHOT SAMAJ AAYA PAR I MEAN HUA NI ABHI TAK   thk hei future me figure out kar lei isko plz
*/


/* ++++++++++++++++++++++++++++++++++++++++++++++++++
	to ab demoralizer bhai ne bola ek to 
	1>sum%(n-1)==0
	2>for each value of a[i]<sum/(n-1)

	if these two satisfy then we should be good
 ++++++++++++++++++++++++++++++++++++++++++++++++++*/
#include <iostream>
#include <climits>
using namespace std;

void solve(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int total=0;
	for(int i=0;i<n;i++){
		total+=arr[i];
	}
	int hello=total;
	if(total%(n-1)==0){
		cout<<"0"<<endl;
		return;
	}
	else{
		while(total%(n-1)!=0){
			total++;
		}		
	}
	cout<<total-hello<<endl;

	}

int main(){
	int test;
	cin>>test;
	while(test--)
	{
		solve();
	}

	return 0;

}