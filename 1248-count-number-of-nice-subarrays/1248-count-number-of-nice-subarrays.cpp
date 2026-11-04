class Solution {
public:

    // Function to count subarrays having AT MOST k odd numbers
    int atMost(vector<int>& nums, int k) {

        int left = 0;
        int count = 0;
        int odd = 0;

        for (int right = 0; right < nums.size(); right++) {

            // Count odd numbers
            if (nums[right] % 2 != 0) {
                odd++;
            }

            // Shrink window if odd count exceeds k
            while (odd > k) {

                if (nums[left] % 2 != 0) {
                    odd--;
                }

                left++;
            }

            // Count valid subarrays ending at right
            count += right - left + 1;
        }

        return count;
    }

    // Main function
    int numberOfSubarrays(vector<int>& nums, int k) {

        return atMost(nums, k) - atMost(nums, k - 1);
    }
};