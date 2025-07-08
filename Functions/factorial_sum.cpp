/*Functions*/


#include <iostream>
using namespace std;

int sumN(int n){
    int sum = 0;
    for(int i=1; i<=n; i++){
        sum =sum+i;
    }
    return sum;
}

int factoN(int n){
    int facto = 1;
    for(int i=1; i<=n; i++){
        facto =facto*i;
    }
    return facto;
}

int main() {
  
   cout<<sumN(5)<<endl;
   cout<<sumN(10)<<endl;
   cout<<factoN(5)<<endl;
   cout<<factoN(4)<<endl;
   
   return 0;
}
