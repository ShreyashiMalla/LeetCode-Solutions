
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        vector<pair<int, int>>arr;
        for(auto i:mp){
            arr.push_back({i.first,i.second});
        }
        for(int i=0;i<arr.size();i++){
            for(int j=i+1;j<arr.size();j++){
                if(arr[i].second<arr[j].second){
                    swap(arr[j],arr[i]);
                }
            }
        }
        vector<int> ans;
        for(int i=0;i<k;i++){
            ans.push_back(arr[i].first);
        }
        return ans;

    }
};
