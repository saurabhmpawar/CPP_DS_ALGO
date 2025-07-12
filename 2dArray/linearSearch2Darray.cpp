//2d array linear search
#include <iostream>
#include<utility>

using namespace std;

pair<int,int> LinearSearch(int matrix[4][3], int element){
      for(int i = 0; i<4; i++){
        for(int j = 0; j <3; j++){
                if(element == matrix[i][j]) 
                    return {i,j};
        }
    }
    
    return {-1,-1};
     
}


int main() {
    
    
    int element;
    int matrix[4][3] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    
   
    cout<<"entire metrics is"<<endl;
    for(int i = 0; i<4; i++){
        for(int j = 0; j <3; j++){
            cout<<matrix[i][j]<< " ";
        }
        cout<<endl;
    }
    
    cout<<"enter new elements to find "<<endl;
    cin>>element;
    cout<<"ans    "<<endl;
    pair <int , int>  P= LinearSearch(matrix,element);
    cout<<" new elements at row "<< P.first<<" colmn "<<P.second<<endl;
    
    
    
    return 0;
}
