
class Solution {
public:
    bool isPalindrome(string s) {
        int left=0;
        int right=s.length()-1;
        while(left<right){
            // Skip symbols and spaces from the left
            if(!isalnum(s[left])){
                left++;
                continue;
            }
            // Skip symbols and spaces from the right
            if(!isalnum(s[right])){
                right--;
                continue;
            }
            // Compare both characters in lowercase
            if(tolower(s[left])!=tolower(s[right])){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};
