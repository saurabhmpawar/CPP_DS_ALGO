
// code to find number is power of two using bitwise shift.
#include <iostream>
using namespace std;

bool checkPowerOfTwo(int n){
    int count = 0 ;
    while(n>0){
        
        if (n & 1)
            count++;
        n = n >> 1;    
            
    }
   return (count == 1);

}

int main() {
   
   cout << "code to find number is power of two using bitwise shift.";
   int n, b;
   cout<< " Please Enter n  " <<endl;
   cin>>n;
   cout<<endl;
   cout<< "*********" <<endl;
   cout<< checkPowerOfTwo(n)<<endl; 

    return 0;
}
