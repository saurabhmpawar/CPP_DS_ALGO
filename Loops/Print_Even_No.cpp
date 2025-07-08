#include <iostream>
using namespace std;

int main() {
    int n = 100;
    int evenSum = 0;
   for (int i = 1; i<=n; i++){
       if(i%2==0){
           cout<<" i = " << i <<endl;
           evenSum = evenSum + i ;
       }
    //   }else{
    //       cout<<" i = " << i <<endl;
    //       evenSum = evenSum + i ;
    //   }
       
   }
    cout<<" evenSum = " << evenSum <<endl;
    return 0;
}
