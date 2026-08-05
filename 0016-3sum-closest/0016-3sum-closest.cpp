class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());

        int closestSum = nums[0] + nums[1] + nums[2];

        for(int i = 0; i < n - 2; i++) {
            int l = i + 1;
            int r = n - 1;

            while(l < r) {
                int currSum = nums[i] + nums[l] + nums[r];

                // If current is closer to target, update
                if(abs(currSum - target) < abs(closestSum - target)) {
                    closestSum = currSum;
                }

                if(currSum < target) {
                    l++;
                }
                else if(currSum > target) {
                    r--;
                }
                else {
                    // Perfect match
                    return currSum;
                }
            }
        }
        return closestSum;
    }
};
