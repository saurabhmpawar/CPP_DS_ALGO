// Find Smallest in Array
#include <iostream>
#include <climits>
using namespace std;

int findSmallest(int marks[], int size){
    int Smallest = INT_MAX ;
    for(int i = 0; i<size; i++){
        // if(marks[i] < Smallest)
        //     Smallest = marks[i];
        Smallest = min(marks[i], Smallest );
        
    }
    
    return Smallest;
}

int main() {
    int size = 5;
    int marks[size];
    
    cout<<"please enter 5 elements of array: - ";
    
    for(int i = 0; i<size; i++){
        cin>>marks[i];
    }
     cout<<"\n elements of array: - ";
    
    for(int i = 0; i<size; i++){
        cout<<marks[i]<<endl;
    }
    
    cout<<"\n smallest element of array will be - "<<findSmallest(marks,size); 
    
    for(int i = 0; i<size; i++){
        if(marks[i] == findSmallest(marks,size))
                cout<<"\n smallest element of array will be at index - "<<i; 
    }
    

    return 0;
}

