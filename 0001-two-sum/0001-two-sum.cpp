class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        map<int,int> mp;//hashmap
        for(int i=0;i<n;i++){
            int need=target-nums[i];
             // Check if the needed number is already in the map
            if(mp.count(need)){
                return {mp[need],i};// Return the indices of both numbers
            }
            mp[nums[i]]=i; // Store the current number and its index
        }
        return {};// Return an empty vector if no pair is found

    }
};