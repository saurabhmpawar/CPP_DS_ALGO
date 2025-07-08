/*Functions*/
// Calculate sum of digits of a number
#include <iostream>
using namespace std;

int sumOfDigits(int a){
    int sum = 0;
    int lastDigit = 0;
    
    while(a>0){
        lastDigit = a%10;
        sum = sum + lastDigit;
        a = a/10;
    }
    
    return sum;
}

int main() {
  
   int a;
   cout<< " Please Enter the Number : - " <<endl;
   cin>>a;
   cout<<endl;
   cout<< "*****Calculating sum of digits *****: - " <<endl;
   cout<<sumOfDigits(a)<<endl;
   
   return 0;
}
