//bubble sort

#include <iostream>
#include<utility>
#include<vector>
using namespace std;

int main() {
    
    vector<int> mat = {11,2,31,4,15,6};
    
   
    cout<<"*********Bubble sort ;*******"<<endl;
    
    for(int i = 0; i<mat.size(); i++){
        bool isSwap = false;
        for(int j = i+1; j <mat.size(); j++){
            if(mat[i]>mat[j])
                swap(mat[i],mat[j]);
                isSwap = true;
        }
        if(!isSwap) break;
    }
    
    for(int val: mat){
        cout<< val<<" ";
    }
    
    return 0;
}
