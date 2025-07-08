
 
// WAF to calculate sum and product of all numbers in an array:
#include <iostream>
using namespace std;

int sumOfArray(int arr[], int size){
    int sum = 0;
    for(int i = 0; i<size; i++){
        sum+=arr[i];
    }
    return sum;
}

int productOfArray(int arr[], int size){
    int product = 1;
    for(int i = 0; i<size; i++){
        product*=arr[i];
    }
    return product;
}

int main() {
    int size = 5;
    int arr[size];
    cout<<"please enter 5 elements of array: - ";
    
    for(int i = 0; i<size; i++){
        cin>>arr[i];
    }
    
    cout<<"\n elements of array: - ";
    for(int i = 0; i<size; i++){
        cout<<arr[i]<< " ";
    }
    
    
    cout<<"\n sum of array  elements - "<<sumOfArray(arr,size);
    cout<<"\n Product of array elements - "<<productOfArray(arr,size);
   
    return 0;
}
