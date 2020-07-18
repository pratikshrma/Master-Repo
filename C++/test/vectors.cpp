#include <iostream> 
#include <vector> 
   
using namespace std; 
   
int main() 
{ 
    vector<int> vec1; 
   
    for (int i = 1; i <= 10; i++) 
        vec1.push_back(i); 
   
    cout << "Understanding begin() and end() function: " << endl; 
    for (auto i = vec1.begin(); i != vec1.end(); ++i) 
        cout << *i << " "; 
 
    return 0; 
}
