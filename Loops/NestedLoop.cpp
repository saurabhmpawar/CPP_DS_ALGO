// Nested Loop  5 rows each with 10 *
#include <iostream>
using namespace std;
int main() {
    int n = 10;
    
    
    for (int j = 0 ; j<=5; j++){
   for (int i = 1; i<=n ; i++){
       cout<<" * "; 
       }
       cout<<endl; 
    }
    return 0;
}
