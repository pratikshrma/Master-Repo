/*
auto is just what it sounds like it automatically assign the datatype to a variable
*/
#include <iostream>
#include <string>

int main(){
    int a=5;
    auto b=5;
    auto c=5.5;
    auto d='a';

    auto e=a; //so it automatically assumes that ok a is an int so b is also an int
    std::cout<<b<<std::endl;

/*
now at this point you might think what is even point of writting the datatype of any thing and at this point c++ becomes kinda like a losely typed language
*/

    return 0;
}