class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cuuSum = 0; 
        int max_sum = INT_MIN;

        for(int val: nums){
            cuuSum += val;
            max_sum = max(max_sum,cuuSum );
            if(cuuSum < 0){
                cuuSum = 0;
            }
        }
        return max_sum;
    }
};
