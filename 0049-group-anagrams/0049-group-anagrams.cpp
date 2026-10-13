
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        // Stores groups of anagrams
        // Key = sorted string
        // Value = original strings having that sorted form
        unordered_map<string, vector<string>> mp;

        // Visit every string in the input array
        for (int i = 0; i < strs.size(); i++) {

            // Copy the current string
            string s = strs[i];

            // Sort its characters alphabetically
            sort(s.begin(), s.end());

            // Use the sorted string as a key
            // Add the original string to that key's group
            mp[s].push_back(strs[i]);
        }

        // Store the final groups
        vector<vector<string>> ans;

        // Visit each group in the map
        for (auto it : mp) {

            // Add that group to the answer
            ans.push_back(it.second);
        }

        // Return all groups
        return ans;
    }
};
