class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for(int i=1;i<nums.size();i++){//started the loop from 1 becoz if we start from 0 we should consider 0-1 in the next step which is -1. It's not present.
            nums[i]+=nums[i-1];//nums[i]=nums[i]+nums[i-1]
        }
        return nums;
        
    }
};