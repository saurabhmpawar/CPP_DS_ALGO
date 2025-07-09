//string Palindrom
#include <iostream>
#include<string>
#include <algorithm> 

using namespace std;

int main() {
    string str = "abaaba";
    
     int start = 0;
     int end = str.length() - 1;
     bool isPalindrom = true;
     
      while(start<end){
        if(str[start++] == str[end--]){
            
        }else{
            isPalindrom = false;
        }
      }
        
    cout<<"palindrom Result "<< isPalindrom << endl;
    
    return 0;
}
