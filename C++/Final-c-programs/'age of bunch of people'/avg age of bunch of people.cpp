 #include <iostream>
using namespace std;
int main()
{
	int nof;//no of family members
	int x=0;
	int totalage = 0;
	int aoi;//age of individual 
	int avg;
	cout<<"enter the no of people in a family ";
	cin>>nof;
	cout<<"enter the age of each individual"<<endl;
	while(nof>x)
	{
		cin>>aoi;
		totalage=totalage+aoi;
		x++;
	} 
		avg=totalage/nof;
		cout<<"avg age of family is "<<avg<<endl;
		
	return 0;
}
