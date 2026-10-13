class Solution {
public:
    bool isAnagram(string s, string t) {

        // Step 1: If lengths are different, they cannot be anagrams
        if (s.length() != t.length()) {
            return false;
        }

        // Step 2: Create an array to store character frequencies
        // Initially, all 26 positions contain 0
        int freq[26] = {0};

        // Step 3: Count characters in s and subtract characters in t
        for (int i = 0; i < s.length(); i++) {

            // Increase the count for the character in s
            freq[s[i] - 'a']++;

            // Decrease the count for the character in t
            freq[t[i] - 'a']--;
        }

        // Step 4: Check whether all character counts are zero
        for (int i = 0; i < 26; i++) {

            // A non-zero count means the characters do not match
            if (freq[i] != 0) {
                return false;
            }
        }

        // Step 5: All character counts match
        return true;
    }
};
