
class Solution {
public:
    int evalRPN(vector<string>& tokens) {

        stack<int> st;

        for (int i = 0; i < tokens.size(); i++) {

            // If the token is an operator
            if (tokens[i] == "+" || tokens[i] == "-" ||
                tokens[i] == "*" || tokens[i] == "/") {

                // Take the top two numbers
                int b = st.top();
                st.pop();

                int a = st.top();
                st.pop();

                // Perform the operation
                if (tokens[i] == "+") {
                    st.push(a + b);
                }
                else if (tokens[i] == "-") {
                    st.push(a - b);
                }
                else if (tokens[i] == "*") {
                    st.push(a * b);
                }
                else if (tokens[i] == "/") {
                    st.push(a / b);
                }
            }
            else {
                // Convert string into integer and push
                st.push(stoi(tokens[i]));
            }
        }

        // Final answer
        return st.top();
    }
};
