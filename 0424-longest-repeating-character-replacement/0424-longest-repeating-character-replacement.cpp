
class Solution {
public:
    int characterReplacement(string s, int k) {
        int left = 0;
        int maxFreq = 0;
        int maxLength = 0;

        int freq[26] = {0};

        for (int right = 0; right < s.length(); right++) {
            freq[s[right] - 'A']++;

            maxFreq = max(maxFreq, freq[s[right] - 'A']);

            int windowLength = right - left + 1;
            int changes = windowLength - maxFreq;

            if (changes > k) {
                freq[s[left] - 'A']--;
                left++;
            }

            maxLength = max(maxLength, right - left + 1);
        }

        return maxLength;
    }
};
