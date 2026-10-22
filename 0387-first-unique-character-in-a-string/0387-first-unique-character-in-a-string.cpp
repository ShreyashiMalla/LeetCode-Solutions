class Solution {
public:
    int firstUniqChar(string s) {
        int n=s.size();
        // Store the frequency of every character
        unordered_map<char,int> f;
        // First loop: count all characters
        for(int i=0;i<n;i++){
            f[s[i]]++;
        }
        // Second loop: find the first character whose frequency is exactly 1
        for(int i=0;i<n;i++){
            if(f[s[i]]==1){
                return i;
            }
        }
        return -1;
    }
};