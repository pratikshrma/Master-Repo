#include <iostream>
#include <string>
// now in this example we want to allocate an array in the stack but we dont want to do it right now
template<typename T,int N>
class Array{

private:
	T m_Array[N];
public:
	int GetSize() const{return N;}
};

int main(){
	Array<int,5> array;//damn ab to sab kuch hi compile time mei kar sakte hei

	std::cout<<array.GetSize()<<std::endl;

/*
	now the main question where you should and where you should not use the templates
	now instead of overloading a function to all the possiblility is just lame when you can just use templates which is
	just like making you compiler write the code for  you 
	
*/
	return 0;
}