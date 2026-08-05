class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<int> lastIndex(26, 0);
        vector<bool> visited(26, false);
        stack<char> st;

        // Step 1: Store last occurrence of each character
        for (int i = 0; i < s.size(); i++) {
            lastIndex[s[i] - 'a'] = i;
        }

        // Step 2: Build result using stack
        for (int i = 0; i < s.size(); i++) {
            char ch = s[i];

            // If already in stack, skip
            if (visited[ch - 'a'])
                continue;

            // Remove bigger characters if they appear later again
            while (!st.empty() && 
                   st.top() > ch && 
                   lastIndex[st.top() - 'a'] > i) {

                visited[st.top() - 'a'] = false;
                st.pop();
            }

            // Push current character
            st.push(ch);
            visited[ch - 'a'] = true;
        }

        // Step 3: Convert stack to string
        string ans = "";
        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());

        return ans;
    }
};