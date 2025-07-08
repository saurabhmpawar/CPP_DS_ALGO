
/*Functions*/
// Calculate nCr binomial coefficient for n and r = ncr = n!/r!*(n-r)!
#include <iostream>
using namespace std;

int factoN(int n){
    int facto = 1;
    for(int i=1; i<=n; i++){
        facto =facto*i;
    }
    return facto;
}

int calculateNcr(int n, int r){
    int ncr = factoN(n)/(factoN(r) * factoN (n-r));
    return ncr;
}


int main() {
  
   int n, r;
   cout<< " Please Enter n and r " <<endl;
   cin>>n;
   cin>>r;
   cout<<endl;
   cout<< "*****Calculating sum of digits *****: - " <<endl;
   cout<<calculateNcr(n,r)<<endl;
   return 0;
}
