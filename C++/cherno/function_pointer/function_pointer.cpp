#include <iostream>

void HelloWorld(){
    std::cout<<"Hello world"<<std::endl;
}

int main(){

    typedef void(*HelloWorldFunction)() ;


    void(*cherno)()=HelloWorld;//this is the type to avoid this we use auto or you can also use typedef which is a more industry standard prefered way to do this

    HelloWorldFunction function1=HelloWorld;

    auto function=HelloWorld; //now if we remove the parenthesis suddenly we are not calling but we are getting the function pointer
    //now get on thing in your mind that 
    //function are just cpu instructions and they are also stored somewhere in your memory(ie exe file)

    function1();
    function();
    cherno();
    //now we have actually able to assign the function to a variable


    return 0;
}