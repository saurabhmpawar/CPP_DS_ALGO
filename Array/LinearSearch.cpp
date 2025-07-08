
// Linear Search
#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int element){
    
    for(int i = 0; i<size; i++){
        if(arr[i] == element)
            return i;
    }
    
    return -1;
}

int main() {
    int size = 5;
    int elementToSearch;
    int arr[size];
    cout<<"please enter 5 elements of array: - ";
    
    for(int i = 0; i<size; i++){
        cin>>arr[i];
    }
    
    cout<<"\n elements of array: - ";
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<endl;
    }
    
    cout<<"\n enter element to find  - "<<endl;
    cin>>elementToSearch; 
    
    cout<<"\n element at position - "<<linearSearch(arr, size, elementToSearch);
    
    return 0;
}
