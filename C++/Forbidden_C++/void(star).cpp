// this is good for the lower level programming in which case you don't care about the type of something all you care about is the binary
// and i just don't understand the code at all good knows what is is.


#include <iostream>
#include <fstream>
#include  <any>

struct Test{

	int a=5;
	float b=10.0f;
};

void DumpToFile1(void* a, size_t bytes){
	std::ofstream f("dump.bin",std::ios::binary);
	f.write((char*)a,bytes);
	f.close();

	Test b=*(Test*)a;
	double d=*(double*)a;
}


void DumpToFile2(const std::any& a,size_t bytes){

	std::ofstream f("dump.bin",std::ios::binary);
	f.write((char*)&a,bytes);
	f.close();

	Test b=std::any_cast<Test>(a);
	double d=std::any_cast<double>(a);

}

int main(){
// so generally void* removes the type form the variable like int or char or some shit
// the 2 is the modern way to deal with such things

	Test t;
	DumpToFile2(t,sizeof(Test));

	

	return 0;
}