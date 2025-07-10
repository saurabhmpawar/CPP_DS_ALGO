#include <vector>
#include <iostream>
using namespace std;

int Binary_search(vector <int> arr, int target){
     int st=0;
     int end=arr.size()-1;
     
     while(st<=end){
        int mid = st + (end-st)/2;
        
        if(target > arr[mid]){
            st = mid+1;
        }
        
        else if(arr[mid] > target){
            end = mid-1;
        }
        if(arr[mid] ==target){
            return mid;
        }
     }
    return -1;
}

int main() {
    
    vector<int> arr = {-1, 0, 3, 4, 5, 9, 12, 13, 14};
    
    int target = 13;
    
   cout<<Binary_search(arr, target);
   
    return 0;
}
