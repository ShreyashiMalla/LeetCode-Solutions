
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {

        // Step 1: If lengths are different, they cannot be anagrams
        if (s.length() != t.length()) {
            return false;
        }

        // Step 2: Sort the characters of string s
        sort(s.begin(), s.end());

        // Step 3: Sort the characters of string t
        sort(t.begin(), t.end());

        // Step 4: Compare both sorted strings
        if (s == t) {
            return true;  // Both strings contain the same characters
        }
        else {
            return false; // The characters are different
        }
    }
};
