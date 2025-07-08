/* Patterns 10 - Pyramid pattern:
/////////////////
    1
   121
  12321
 1234321
123454321
////////////////
*/
#include <iostream>
using namespace std;
int main() {
    int n = 5;
    
    for (int i = 1; i<=n ; i++){
        
       for(int j = 1; j<=n-i; j++){
            cout<<" ";
        }
        
        for(int k =1 ; k<=i; k++){
            cout<<k;
        }
        
        for(int l =i; l>1; l--){
            cout<<l-1;
        }
        
        
      cout<<endl; 
    }
    return 0;
}
