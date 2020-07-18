#include <iostream>
#include <stdio.h>
#include "people.hpp"
#include "birthday.hpp"

using namespace std;
int main()
{
	string name("");
	cout<<"enter your name"<<endl;
	cin>>name;
	people p;
	cout<<"enter your dob"<<endl;
	int d;
	int m;
	int y;
	cin>>d>>m>>y;
	p.name(name);
	birthday b;
	b.birth(d,m,y);
	
	}
