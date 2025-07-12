//2d Diagonal Sum of square matrics
#include <iostream>
#include<utility>

using namespace std;

int DiagonalSum(int matrix[3][3], int n){
     int sum = 0;
      for(int i = 0; i<3; i++){
        for(int j = 0; j <3; j++){
                if(i==j) {
                    sum +=matrix[i][j] ; 
                }
                else if(j == n-i-1){
                    sum +=matrix[i][j] ;
                }
        }
        
        
    }
    
    return sum;
     
}


int main() {
    
    
    int element;
    int matrix[4][3] = {{1,2,3},{4,5,6},{7,8,9}};
    
   
    cout<<"entire metrics is"<<endl;
    for(int i = 0; i<3; i++){
        for(int j = 0; j <3; j++){
            cout<<matrix[i][j]<< " ";
        }
        cout<<endl;
    }
   
    cout<<"ans    "<<endl;
    int sum = DiagonalSum(matrix , 3);
    cout<<" sum of diagonal elements "<<sum<<endl;
    
    
    
    return 0;
}
