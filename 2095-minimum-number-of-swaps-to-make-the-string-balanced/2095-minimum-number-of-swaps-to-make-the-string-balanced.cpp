class Solution {
public:
    int minSwaps(string s) {
        stack<char> st;
        for (int i = 0; i < s.length(); i++) {
            char ch = s[i];

            if (ch == '[') {
                st.push(ch);
            } 
            else {
                if (!st.empty() && st.top() == '[') {
                    st.pop();
                } 
                else {
                    st.push(ch);
                }
            }
        }

        // Count unmatched opening and closing brackets
        int a = 0, b = 0;
        while (!st.empty()) {
            if (st.top() == '[') {
                b++;
            } 
            else {
                a++;
            }
            st.pop();  // Pop the element to avoid infinite loop
        }

        // Calculate the minimum number of swaps
        int ans = (a + 1) / 2 + (b + 1) / 2;
        return ans/2;
    }
};
