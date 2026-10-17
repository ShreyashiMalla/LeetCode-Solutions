
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum = 0;

        // Step 1: Calculate the sum of the first k elements
        for (int i = 0; i < k; i++) {
            sum += nums[i];
        }

        // Step 2: Store the maximum sum
        int maxSum = sum;

        // Step 3: Slide the window forward
        for (int i = k; i < nums.size(); i++) {
            sum = sum - nums[i - k] + nums[i];

            if (sum > maxSum) {
                maxSum = sum;
            }
        }

        // Step 4: Return the maximum average
        return (double)maxSum / k;
    }
};

