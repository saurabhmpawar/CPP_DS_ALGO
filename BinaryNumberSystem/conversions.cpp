//decimal to binary
// binary to decimal
#include<iostream>
using namespace std;

int calculateBinary(int decNum){
    int binaryNo = 0;
    int rem =0;
    int power = 1;
    
    while(decNum>0){
       rem = decNum%2;
       decNum = decNum/2;
       binaryNo = binaryNo + (power * rem);
       power = power*10;
    }
    return binaryNo;
}

int calculateDecimal(int binaryNum){
    int decimal_no = 0;
    int remd =0;
    int power = 1;
    
    while(binaryNum>0){
       remd = binaryNum % 10;
       binaryNum = binaryNum/10;
       decimal_no = decimal_no + (power * remd);
       power= power *2;
    }
    return decimal_no;
}

int main(){
    int n, b;
   cout<< " Please Enter n to calculate its binary " <<endl;
   cin>>n;
   cout<<endl;
   cout<< "*********" <<endl;
   cout<< calculateBinary(n)<<endl;
   cout<< " Please Enter  binary " <<endl;
   cin>>b;
   cout<<endl;
   cout<< "*********" <<endl;
   cout<< calculateDecimal(b)<<endl;
   return 0;
}
