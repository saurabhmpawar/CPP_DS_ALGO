// Vectors Reversal
#include <iostream>
#include <vector>
using namespace std;

void reverseArray(vector <int> &vec){
    int size = vec.size();
    int start = 0, end = size-1;
    
    while(start<end){
        swap(vec.at(start), vec.at(end));
        start++;
        end--;
    }
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
    reverseArray(vec);
    
    cout<< "your vector after reversal "<<endl;
    for(int i : vec){
        cout<<i<<endl;
    }
    return 0;
}
    
