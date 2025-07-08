
	
// Reverse the Array without taking another array
#include <iostream>
#include <climits>
using namespace std;


void reverseArray(int arr[], int size){
    int start = 0, end = size-1;
    
    while(start<end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main() {
    int size = 10;
    int elementToSearch;
    int arr[size];
    cout<<"please enter 5 elements of array: - ";
    
    for(int i = 0; i<size; i++){
        cin>>arr[i];
    }
    
    cout<<"\n elements of array: - ";
    for(int i = 0; i<size; i++){
        cout<<arr[i]<< " ";
    }
    
    reverseArray(arr, size);
    cout<<"\n Reverse Array - ";
    for(int i = 0; i<size; i++){
        cout<<arr[i]<< " ";
    }
    
    return 0;
}
 
