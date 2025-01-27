class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for (int i = 0; i < s.length(); i++) {
            char ch = s[i];

            // Push opening brackets onto the stack
            if (ch == '(' || ch == '[' || ch == '{') {
                st.push(ch);
            } 
            // For closing brackets
            else {
                // If stack is empty or top does not match, return false
                if (st.empty() || 
                   (ch == ')' && st.top() != '(') ||
                   (ch == ']' && st.top() != '[') ||
                   (ch == '}' && st.top() != '{')) {
                    return false;
                }
                st.pop();  // Pop the matching opening bracket
            }
        }

        // If stack is empty, all brackets were matched
        return st.empty();
    }
};
