
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        // Create an unordered_set to store unique elements
        unordered_set<int> s;

        // Traverse each element of the array
        for (int i = 0; i < nums.size(); i++) {

            // Check if the current element is already present in the set
            if (s.find(nums[i]) != s.end()) {

                // If found, the element appears at least twice
                return true;
            }

            // If not found, insert the element into the set
            s.insert(nums[i]);
        }

        // If no duplicate is found after checking all elements
        return false;
    }
};