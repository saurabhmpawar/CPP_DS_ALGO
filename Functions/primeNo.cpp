
/*Functions*/
// Calculate all prime number from 1 to N
#include <iostream>
using namespace std;

void calculateNprimes(int n){
    
    for(int i = 2; i<=n; i++){
        bool isPrime = true;
        int j=2;
        while(j*j<=i){
            if(i%j == 0){
                isPrime = false;
            }
            j++;
        }
        
        if(isPrime){
        cout<< i<<" "<<endl;
        }
    }
    
}


int main() {
  
   int n;
   cout<< " Please Enter n till where you want prime numbers " <<endl;
   cin>>n;
   cout<<endl;
   cout<< "**********: - " <<endl;
   calculateNprimes(n);
   return 0;
}
