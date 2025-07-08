
/* Patterns 9 - Inverted Triangle pattern:
/////////////////
11111
 2222
  333
   44
    5
////////////////
*/
#include <iostream>
using namespace std;
int main() {
    int n = 5;
    for (int i = 0; i<n ; i++){
        
       for(int j = 0; j<i; j++){
            cout<<" ";
        }
        for(int k =1 ; k<= n-i; k++){
            cout<<i+1;
        }
        
      cout<<endl; 
    }
    return 0;
}


