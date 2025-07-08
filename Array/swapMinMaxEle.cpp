
// WAF to swap the max and min number of array
#include <iostream>
#include <climits>
using namespace std;

void swap_small_large(int arr[], int size){
    int Smallest = INT_MAX ;
    int Largest = INT_MIN;
    int small_index,large_index;
    
    for(int i = 0; i<size; i++){
        Smallest = min(arr[i], Smallest );
        Largest = max(arr[i], Largest );
    }
    
    for(int i = 0; i<size; i++){
        if(arr[i] == Smallest){
            small_index = i;
        }
        if(arr[i] == Largest){
            large_index = i;
        }
    }
    
    swap(arr[small_index], arr[large_index]);
    
    
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
    
    swap_small_large(arr,size);
    cout<<"\n elements of array after swapping - ";
    for(int i = 0; i<size; i++){
        cout<<arr[i]<< " ";
    }
    return 0;
}
    
	
