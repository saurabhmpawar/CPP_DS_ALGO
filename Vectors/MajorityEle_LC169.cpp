/*169. Majority Element
Easy
Topics
premium lock icon
Companies
Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

 

Example 1:

Input: nums = [3,2,3]
Output: 3
Example 2:

Input: nums = [2,2,1,1,1,2,2]
Output: 2*/


//***************************************BF0***********************************************
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int size =nums.size();
        int Mejority_ele;
        int count;

        for(int i = 0; i<= size; i++){
            count = 0;
            for(int j = 0; j<=size; j++){
                if(nums[i] == nums[j]){
                        count++;
                }
                
            }
            if(count > floor(size/2)){
                        Mejority_ele = nums[i];
                        return Mejority_ele;
                }
        }
        return Mejority_ele;
    }
};



//*************************************BF*************************************************

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int size =nums.size();
        int Mejority_ele;
        int freq;

        for(int val : nums ){
            freq = 0;
            for(int val2 : nums){
                if(val == val2){
                        freq++;
                }
                
            }
            if(freq > floor(size/2)){
                        Mejority_ele = val;
                        return Mejority_ele;
                }
        }
        return Mejority_ele;
    }
};


//************************************optimal************************************************

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        int size =nums.size();
        int Mejority_ele = nums[0];
        int freq =1;

        for(int i=1; i<size; i++){
            if(nums[i] == nums[i-1]){
                freq++;
            }else{
                freq =1;
                Mejority_ele = nums[i] ;
            }

           if(freq > floor(size/2)){
                   return Mejority_ele;
           }
        }
          
        return Mejority_ele;
    }
};




//************************************most optimal: Moor's Voting Algorithm ************************************************

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int Mejority_ele; 
        int freq = 0; 

        for(int i=0; i<nums.size(); i++){
            if(freq == 0){
                Mejority_ele = nums[i];
            }
            if(Mejority_ele == nums[i]){
                freq++;
            }else{
                freq--;
            }
        }
          
        return Mejority_ele;
    }
};
