
#include <iostream>
#include<string>
using namespace std;

int main() {
    
    string str1 = "gg";
    string str2 = "Pawar ";
    string str3;
    string str4;
    
    cout<<"Enter string ";
    getline(cin,str4);
    cout<<" \nstring 4 is "<<str4;
    
    str1 = "Saurabh ";  //dynamic
    cout<<endl<<str1+str2;     //concatinate
    str2 = "Saurabh ";
    cout<<(str1==str2);   //compare
    cout<<(str1<str2);   //lexiography comparision
    cout<<str1.length();    //legnth
    
    cout<<"Enter string \n";
    cin>>str3; //take input 
    cout<<str3;   // till space only
 
    //Loops on String -- for/foreach
    
    
    
    
    return 0;
}
