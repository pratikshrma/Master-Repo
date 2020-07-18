#include <iostream>
using namespace std;
int main()
{
	int n;//no of that shapes whatever
	int sides = 0;
	cin>>n;
	string shape;
	cin>>shape;
	for(int i=0;i<n-1;i++)
	{
		cin >> shape;
		if(shape=="Tetrahedron")
		{
			sides=sides+4;
			}
		else if(shape=="Cube")
		{
			sides=sides+6;
			}
		else if(shape=="Octahedron")
		{
			sides=sides+8;
			}
		else if(shape=="Dodecahedron")
		{
			sides=sides+12;
			}
		else if(shape=="Icosahedron")
		{
			sides=sides+20;
			}
		
	}
	cout<<sides<<endl;
	return 0;
}
