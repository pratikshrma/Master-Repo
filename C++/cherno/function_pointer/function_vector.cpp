#include <iostream>
#include <vector>

void print_Vector(std::vector<int> data){ //ye to simple vala method hei and this is copied
    for(int i=0;i<data.size();i++){     //this is pass by data
        std::cout<<data[i]<<" ";
    }std::cout<<std::endl;

}

void print_Vector1(std::vector<int> &data){ //pass by reference 
    for(int i=0;i<data.size();i++){
        std::cout<<data[i]<<" ";
    }std::cout<<std::endl;

}

int main(){
    std::vector<int> data={1,2,3,3,4,5};
    print_Vector(data);
    print_Vector1(data);

    return 0;
}