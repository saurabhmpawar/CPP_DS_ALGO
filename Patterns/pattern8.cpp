

/* Patterns 8 - FLOYD's Traingle:
/////////////////
a 
b c 
d e f 
g h i j 
k l m n o 
////////////////
*/
#include <iostream>
using namespace std;
int main() {
    int n = 5;
    char ch= 'a';
    for (int i = 1; i<=n ; i++){
       for(int j = 1; j<=i; j++){
            cout<<ch << " ";
            ch++;
        }
      cout<<endl; 
    }
    return 0;
}
