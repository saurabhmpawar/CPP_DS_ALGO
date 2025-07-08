#include <iostream>
using namespace std;

int main() {
    int n = 100;
    int evenSum = 0;
    int i = 1;
   while(i<=n){
       if(i%2==0){
           cout<<" i = " << i <<endl;
           evenSum = evenSum + i ;
       }
       i++;
       
   }
    cout<<" evenSum = " << evenSum <<endl;
    return 0;
}
