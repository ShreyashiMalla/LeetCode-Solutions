
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();

        int left = 0;
        int zeroCount = 0;
        int maxLen = 0;

        for (int right = 0; right < n; right++) {

            // If the current element is 0, increase zeroCount
            if (nums[right] == 0) {
                zeroCount++;
            }

            // If zeros exceed k, shrink the window from the left
            while (zeroCount > k) {
                if (nums[left] == 0) {
                    zeroCount--;
                }
                left++;
            }

            // Calculate the current window length
            int len = right - left + 1;

            // Update the maximum length
            maxLen = max(maxLen, len);
        }

        return maxLen;
    }
};
