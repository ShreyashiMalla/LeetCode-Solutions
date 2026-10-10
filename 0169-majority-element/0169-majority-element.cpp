
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = nums[0]; // Assume the first element is the majority
        int count = 0;            // Tracks the candidate's votes

        for (int i = 0; i < nums.size(); i++) { // Visit each element
            if (count == 0) {       // If no votes remain
                candidate = nums[i]; // Select a new candidate
            }

            if (nums[i] == candidate) { // If current element matches candidate
                count++;                // Increase its votes
            } else {
                count--;                // Decrease its votes
            }
        }

        return candidate; // Return the majority element
    }
};
