/*Functions*/
// call by Value
#include <iostream>
using namespace std;

int sum(int a, int b){
    return (a+b);
}

int main() {
  
   int a = 5,b =4;
   cout<<sum(a,b)<<endl;
   
   return 0;
}
