
/* Patterns 6 Traingle:
/////////////////
1
21
321
4321
54321
////////////////
*/
#include <iostream>
using namespace std;
int main() {
    int n = 5;
    for (int i = 1; i<=n ; i++){
       for(int j = i; j>=1; j--){
            cout<<j;
        }
      cout<<endl; 
    }
    return 0;
}
