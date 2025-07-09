// Pair Sum
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

vector<int> pairSum1(vector<int> nums, int target){
    int size = nums.size();
    vector<int> ans;
    
    for(int i=0; i<=size; i++){
        for(int j=i+1; j<=size; j++){
            if(nums[i]+nums[j] == target){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
            
        }
        
    }
    return ans;
}


vector<int> pairSum2(vector<int> nums, int target){
    int size = nums.size();
    vector<int> ans2;
    int i=0,j=size-1; 
    
    while(i<j){
        
        if(nums[i]+nums[j]<target){
         i++;   
        }
        if(nums[i]+nums[j]>target){
         j--;   
        }
        if(nums[i]+nums[j]==target){
            ans2.push_back(i);
            ans2.push_back(j);
            return ans2;
        }
        
    }
    
    return ans2;
}


int main() {
    vector<int> nums = {2,7,11,15}; //sorted given
    int target = 17;  //to check for
    
    vector<int> ans = pairSum1(nums, target);
    cout<<"\n Answer 1:  "<<ans[0]<<" "<<ans[1]<<endl;
    
    vector<int> ans2 = pairSum2(nums, target);
    cout<<"\n Answer 2:  "<<ans2[0]<<" "<<ans2[1]<<endl;
    
    
    
    return 0;
}
    
