class Solution {
public:
    bool isAnagram(string s, string t) {
        int n= s.size();
        int m=t.size();
        if(n!=m){
            return false;
        }
        unordered_map<char,int>have;
        unordered_map<char,int>need;
        
        for(int i=0;i<n;i++){
            have[s[i]]++;
        }
        for(int i=0;i<m;i++){
            need[t[i]]++;
        }
        for(auto i:have){
            char c=i.first;
            if(need[c]!=i.second){
                return false;
            }
        }
        return true;
    }
};
