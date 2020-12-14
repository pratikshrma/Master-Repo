#include <iostream>
#include <vector>

void PrintValue(int value){
    std::cout<<"Value : "<<value<<std::endl;
}

void ForEach(const std::vector<int>& values,void(*func)(int)){//so the second parameter is a function 
    for(int value:values){
        func(value);
    }
}

int main(){

    std::vector<int> values={1,5,4,2,3};

    ForEach(values,PrintValue);


    return 0;
}

//SO THIS SEEMS KINDA OVERKILL SO WE ARE GONNA DO A SECOND EXAMPLE