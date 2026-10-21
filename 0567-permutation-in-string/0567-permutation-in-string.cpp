
class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.size();
        int m = s2.size();

        if (n > m) {
            return false;
        }

        int count1[26] = {0};
        int count2[26] = {0};

        // Count characters in s1 and first window of s2
        for (int i = 0; i < n; i++) {
            count1[s1[i] - 'a']++;
            count2[s2[i] - 'a']++;
        }

        // Check the first window
        if (equal(count1, count2)) {
            return true;
        }

        // Slide the window across s2
        for (int i = n; i < m; i++) {
            // Add the new character
            count2[s2[i] - 'a']++;

            // Remove the character leaving the window
            count2[s2[i - n] - 'a']--;

            // Compare character frequencies
            if (equal(count1, count2)) {
                return true;
            }
        }

        return false;
    }

private:
    bool equal(int count1[], int count2[]) {
        for (int i = 0; i < 26; i++) {
            if (count1[i] != count2[i]) {
                return false;
            }
        }
        return true;
    }
};
