

// code to find number's Reversal
#include <iostream>
using namespace std;

int reverseNum(int n){
    int reverse_Num = 0 ;
    int rem = 0;
    
    while(n>0){
        rem = n%10;
        n = n/10;
        reverse_Num = (reverse_Num * 10) + rem;      
    }
   return reverse_Num;

}

int main() {
   
   cout << "reverseNum .";
   int n;
   cout<< " Please Enter n  " <<endl;
   cin>>n;
   cout<<endl;
   cout<< "*********" <<endl;
   cout<< reverseNum(n)<<endl; 

    return 0;
}
