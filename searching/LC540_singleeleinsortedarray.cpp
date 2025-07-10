
/*540. Single Element in a Sorted Array
Medium
Topics
premium lock icon
Companies
You are given a sorted array consisting of only integers where every element appears exactly twice, except for one element which appears exactly once.

Return the single element that appears only once.

Your solution must run in O(log n) time and O(1) space.

 

Example 1:

Input: nums = [1,1,2,3,3,4,4,8,8]
Output: 2
Example 2:

Input: nums = [3,3,7,7,10,11,11]
Output: 10
 

Constraints:

1 <= nums.length <= 105
0 <= nums[i] <= 105*/







class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {

        int st = 0;
        int end = nums.size() -1;

        while(st<=end){
            int mid = st + (end-st)/2;
            
            if(mid == 0 && nums[0]!=nums[1])   return nums[mid];
            if(mid == end && nums[end-1]!=nums[end-2])   return nums[mid];
          
            if(nums[mid-1]!=nums[mid] && nums[mid]!=nums[mid+1])  return nums[mid];
            
            if( mid %2 == 0){  //even
                    if(nums[mid-1]==nums[mid]){  //left
                            end = mid-1; 
                    }else{     //right
                         st = mid + 1;
                     }
             }
            else{
                if(nums[mid-1]==nums[mid]){ //right 
                            st = mid + 1;
                    }else{  //left
                         end = mid-1;
                     }
            }

        }

        return -1;
                
    }
        
    
};
