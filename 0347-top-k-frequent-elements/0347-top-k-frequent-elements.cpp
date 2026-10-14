
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        // Step 1: Store the frequency of each number
        unordered_map<int, int> freq;

        for (int num : nums) {
            freq[num]++;
        }

        // Step 2: Store numbers in a vector
        // Each pair contains {number, frequency}
        vector<pair<int, int>> arr;

        for (auto it : freq) {
            arr.push_back({it.first, it.second});
        }

        // Step 3: Sort by frequency in descending order
        sort(arr.begin(), arr.end(),
             [](pair<int, int>& a, pair<int, int>& b) {
                 return a.second > b.second;
             });

        // Step 4: Collect the first k numbers
        vector<int> ans;

        for (int i = 0; i < k; i++) {
            ans.push_back(arr[i].first);
        }

        // Step 5: Return the answer
        return ans;
    }
};
