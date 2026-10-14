
class Solution {
public:
    bool isPalindrome(string s) {

        // Pointer at the beginning
        int left = 0;

        // Pointer at the end
        int right = s.length() - 1;

        // Continue until the pointers meet
        while (left < right) {

            // Skip characters that are NOT letters or digits
            while (left < right && !isalnum(s[left])) {
                left++;
            }

            // Skip characters that are NOT letters or digits
            while (left < right && !isalnum(s[right])) {
                right--;
            }

            // Convert both characters to lowercase
            char a = tolower(s[left]);
            char b = tolower(s[right]);

            // If the characters are different, it is not a palindrome
            if (a != b) {
                return false;
            }

            // Move both pointers toward the center
            left++;
            right--;
        }

        // If all characters match, it is a palindrome
        return true;
    }
};
