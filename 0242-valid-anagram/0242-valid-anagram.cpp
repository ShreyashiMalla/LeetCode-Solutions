class Solution {
public:
    bool isAnagram(string s, string t) {
        int n= s.size();
        int m=t.size();
        // If lengths are different, they cannot be anagrams
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
        // Check whether the frequency of each character is the same
        for(auto i:have){
            char c=i.first; // Get the character
            if(need[c]!=i.second){
                return false;// Frequencies are different
            }
        }
        return true; // All character frequencies match
    }
};
