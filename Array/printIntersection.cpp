// WAF to print intersection of two arrays
#include <iostream>
#include <climits>
using namespace std;

void printIntersection(int arr[], int arr2[], int size){
     
    for(int i = 0; i<size; i++){
        bool ismatch = false;
        for(int j = 0; j<size; j++){
            
                if (arr[i] == arr2[j]){
                    ismatch = true;
                }
                
            }  
            if(ismatch) cout<<arr[i]<< " ";
        }
        
    }
    

int main() {
    int size = 5;
    int arr[size];
    int arr2[size];
    
    cout<<"please enter 5 elements of array 1: - \n";
    
    for(int i = 0; i<size; i++){
        cin>>arr[i];
    }
    
    cout<<"please enter 5 elements of array 2: - \n";
    
    for(int i = 0; i<size; i++){
        cin>>arr2[i];
    }
    
    cout<<"\n elements of array 1: - ";
    for(int i = 0; i<size; i++){
        cout<<arr[i]<< " ";
    }
    
    cout<<"\n elements of array 2: - ";
    for(int i = 0; i<size; i++){
        cout<<arr2[i]<< " ";
    }
    
    cout<<"\n Intersection of two arrays: - ";
    printIntersection(arr, arr2, size);
    return 0;
}
    
