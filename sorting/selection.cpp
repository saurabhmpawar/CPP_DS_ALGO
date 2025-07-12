//selection sort

#include <iostream>
#include<utility>
#include<vector>
using namespace std;

int main() {
    
    vector<int> mat = {11,2,31,4,15,6};
    
    cout<<"********* selection sort ;*******"<<endl;
    
    for(int i = 0; i<mat.size()-1; i++){
        int smallestindex = i;
        for(int j = i+1; j <mat.size(); j++){
            if(mat[j]<mat[smallestindex])
                smallestindex = j;
            
        }
        swap(mat[i],mat[smallestindex]);
    }
    
    for(int val: mat){
        cout<< val<<" ";
    }
    
    return 0;
}
