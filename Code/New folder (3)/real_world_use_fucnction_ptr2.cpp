#include <iostream>
#include <vector>

//NOW THE PREVIOUS FUNCION SEEMS KINDA OVERKILL SO NOW WHAT WE ARE GONNA USE IS LANBDA
/*
    SO WHAT IS A LABDA?? Ans :- it is a normal function but is is not decleared as a normal function is kinda decleared during the runtime of the funciton and 
    then it is thrown away
*/

void ForEach(const std::vector<int>& values,void(*func)(int)){//so the second parameter is a function 
    for(int value:values){
        func(value);
    }
}

int main(){

    std::vector<int> values={1,5,4,2,3};

    ForEach(values,[](int value){std::cout<<"Value: "<<value<<std::endl;}); //this sq brackets are known as a capcha methods and this is how we pass variables to the lambda functions


    return 0;
}
