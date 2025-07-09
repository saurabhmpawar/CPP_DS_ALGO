// Vectors Linear Search
#include <iostream>
#include <vector>
using namespace std;

int linearSearch(vector<int> &vec, int element){
    
    for(int i : vec){
      if(vec[i] == element)
            return i;
    }
    
   
    return -1;
}

int linearSearch(){
   
   return 0; 
}

int main() {
    
    vector<int> vec;
    int size, input, element;
    cout<< "please enter vector size you want "<<endl;
    cin>>size;
    cout<< "please enter elements "<<endl;
    for(int i=1; i<= size; i++){
        cin >> input;
        vec.push_back(input);
    }
    cout<< "your vector "<<endl;
    for(int i : vec){
        cout<<i<<endl;
    }
    
    cout<< "please enter element you want to search "<<endl;
    cin>>element;
    
    cout<< "Search completed at : "<<linearSearch(vec, element)<<endl;
    return 0;
}
    
