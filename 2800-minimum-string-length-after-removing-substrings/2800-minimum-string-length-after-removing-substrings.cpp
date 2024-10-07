class Solution {
public:
    int minLength(string s) {
        stack<char> st;
        for(int i=0;i<s.length();i++){
            char ch=s[i];
        
       if(!st.empty()) {
                char top = st.top();
                if((ch == 'B' && top == 'A') || (ch == 'D' && top == 'C')) {
                    st.pop();  
                } else {
                    st.push(ch); 
                }
            } else {
                st.push(ch); 
            }
        }
        return st.size(); 
    }
};