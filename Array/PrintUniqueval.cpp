// WAF to print all Unique Values in Array
#include <iostream>
#include <climits>
using namespace std;

void PrintUniqueval(int arr[], int size){
     
    for(int i = 0; i<size; i++){
        bool isunique = true;
        for(int j = 0; j<size; j++){
            if(i!=j){
                if (arr[i] == arr[j]){
                    isunique = false;
                }
                
            }  
        }
        if(isunique == true) cout<<arr[i]<< " ";
    }
    
  
}

int main() {
    int size = 5;
    int arr[size];
    cout<<"please enter 5 elements of array: - \n";
    
    for(int i = 0; i<size; i++){
        cin>>arr[i];
    }
    
    cout<<"\n elements of array: - ";
    for(int i = 0; i<size; i++){
        cout<<arr[i]<< " ";
    }
    
    cout<<"\n Unique elements of array: - ";
    PrintUniqueval(arr,size);
    return 0;
}
    
