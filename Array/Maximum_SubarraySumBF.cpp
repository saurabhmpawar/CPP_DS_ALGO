// Maximum Subarray sym
//Brute Force
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    
   int n = 5;
   int arr[5] = {-1, 2, 3 ,-5,-6};
   int maxSum = INT_MIN;
   
   for(int st = 0; st<n; st++){
       int currSum = 0;
       for(int end = st; end<n; end++){
           currSum+=arr[end];
           maxSum = max(maxSum,currSum);
       }
   }
   
   cout<<"max subarry sum = "<<maxSum;
   
   
    return 0;
}
    
