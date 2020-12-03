#include <iostream>
#include <string>

std::string GetName(){
    return "Aman";
}

int main(){
    std::string name=GetName();
    //so instead of doing this you could also do 
    //now there are two sides to this as well if you change std::string to a char* you dont have to change anything in the main
    //code bc auto will take care of it and its nice but what if this name variblue use some string specific functions like 
    //substr or someshit now it aint gonna work bc the data type is char* instead of std::string  so i mean you gotta choose you 
    // your poison
    
    auto name1=GetName();


    return 0;
}