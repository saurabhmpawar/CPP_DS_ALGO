
/*Functions*/
// Calculate Nth number in Fibonacci series
#include <iostream>
using namespace std;

void calculateFibonacci(int n){
    int temp =0, temp2 = 1;
    int next = 0;
     for (int i = 2; i<=n; i++){
         next = temp + temp2;
         temp = temp2;
         temp2 = next;
     }
     
     cout<< "nth number in series will be - " <<next <<endl;
    
    }



int main() {
  
   int n;
   cout<< " Please Enter n till where you want Fibonacci nth " <<endl;
   cin>>n;
   cout<<endl;
   cout<< "**********: - " <<endl;
   calculateFibonacci(n);
   return 0;
}
