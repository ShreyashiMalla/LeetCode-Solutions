class Solution {
public:
    int longestPalindrome(string s) {
        int n=s.size();
        unordered_map<char, int> f;
        for(int i=0;i<n;i++){
            f[s[i]]++;
        }
        bool odd=false;
        int res=0;
        for(auto i:f){
            int val=i.second;
            res+=(val/2)*2;
            if(val%2==1){
                odd=true;
            }
        }
        if(odd){
            res++;
        }
        return res;
    }
};