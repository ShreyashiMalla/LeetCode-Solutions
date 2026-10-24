class Solution {
public:
    int longestPalindrome(string s) {
        int n=s.size();
        unordered_map<char, int> f;
        // Count how many times each character appears
        for(int i=0;i<n;i++){
            f[s[i]]++;
        }
        bool odd=false;// Checks if any character has an odd frequency
        int res=0;// Stores the maximum palindrome length
        for(auto i:f){
            int val=i.second;// Get the frequency of the character
            res+=(val/2)*2;// Add the maximum number of characters that can be used in pairs
            // If the frequency is odd, a character can potentially go in the middle
            if(val%2==1){
                odd=true;
            }
        }
        // If any odd frequency exists, use one character in the middle
        if(odd){
            res++;
        }
        return res;
    }
};