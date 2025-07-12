//2d array
#include <iostream>
using namespace std;
int main() {
    
    int matrix[4][3] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    
    cout<<matrix[2][1]<<endl;
    matrix[2][1] = 88;
    cout<<matrix[2][1]<<endl;
    
    cout<<"entire metrics"<<endl;
    for(int i = 0; i<4; i++){
        for(int j = 0; j <3; j++){
            cout<<matrix[i][j]<< " ";
        }
        cout<<endl;
    }
    
    
    cout<<"enter new elements"<<endl;
    for(int i = 0; i<4; i++){
        for(int j = 0; j <3; j++){
            cin>>matrix[i][j];
        }
    }
    
    cout<<"entire metrics"<<endl;
    for(int i = 0; i<4; i++){
        for(int j = 0; j <3; j++){
            cout<<matrix[i][j]<< " ";
        }
        cout<<endl;
    }
     
    return 0;
}
