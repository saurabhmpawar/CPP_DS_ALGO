
/* Patterns 11 - Hollow Diamond pattern:
/////////////////
    *
   * *
  *   *
 *     *
*       *
 *     *
  *   *
   * *
    *
////////////////
*/
#include <iostream>
using namespace std;
int main() {
    int n = 5 ;
    
    for (int i = 1; i<=n ; i++){
        
       for(int j = i; j<=n-1; j++){
            cout<<" ";
        }
        cout<< "*";
        
        if(i!=1)
        {
        for(int k =1 ; k<2*i-2; k++)
            cout<< " ";
        
        cout<< "*";
        }
        
        cout<<endl;
        }
         
         
         
      for (int i = 0; i<n-1 ; i++){
        
       for(int j = 0; j<i+1; j++){
            cout<<" ";
        }
        cout<< "*";
        
        if(i!= n-2)
        {
        for(int k =0 ; k<2*(n-i)-5; k++){
            cout<< " ";
        }
             cout<< "*";
        }
        cout<<endl;
        }    
        
    return 0;
}
