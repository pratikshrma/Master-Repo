//NOW lets see a case in which its actually good to use auto type 

#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

class Devices{};

class DeviceManager
{
private:
    std::unordered_map<std::string,std::vector<Devices*>> m_Devices;
public:
    const std::unordered_map<std::string,std::vector<Devices*>>& GetDevices() const{
        return m_Devices;
    }   
};

int main(){
    std::vector<std::string> strings;
    strings.push_back("Apples");
    strings.push_back("orange");
    strings.push_back("mango");
    
    //now if we want to iterate over all this we would have to do this
    for(std::vector<std::string>::iterator it= strings.begin();
        it!=strings.end();it++){
            std::cout<<*it<<std::endl;
        }

    //so instead of doing all this you could just do auto and you dont have to do this massive type
    
    for(auto it= strings.begin();it!=strings.end();it++){
            std::cout<<*it<<std::endl;
    }

    using 

    DeviceManager dm;
    const std::unordered_map<std::string,std::vector<Devices*>>& Devices=dm.GetDevices();
    //so this is the type absolutely massive i mean what the helll


    return 0;
}