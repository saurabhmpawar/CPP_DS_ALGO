// Vectors
#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    // vector<int> vec;
    vector<int> vec (5,5);
    //vector<int> vec ={1,2,3};
    cout<<vec[0];
    vector<char> vec2 = {'a', 'b', 'l'};
    for(char i : vec2){
        cout<<i<<endl;
    }
    
    cout<< "vector size: "<<vec2.size()<<endl;
    vec2.push_back('v');
    vec2.push_back('v');vec2.pop_back();
    cout<< "vector size: "<<vec2.size()<<endl;
    for(char i : vec2){
        cout<<i<<endl;
    }
    cout<< "vector front: "<<vec2.front()<<endl;
    cout<< "vector back: "<<vec2.back()<<endl;
    cout<< "vector at: "<<vec2.at(2)<<endl;
    return 0;
}
    
