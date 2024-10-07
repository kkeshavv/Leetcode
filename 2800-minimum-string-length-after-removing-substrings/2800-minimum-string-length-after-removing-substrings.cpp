// class Solution {
// public:
//     int minLength(string s) {
//         stack<char> st;
//         for(int i=0;i<s.length();i++){
//             char ch=s[i];
        
//        if(!st.empty()) {
//                 char top = st.top();
//                 if((ch == 'B' && top == 'A') || (ch == 'D' && top == 'C')) {
//                     st.pop();  
//                 } else {
//                     st.push(ch); 
//                 }
//              }
//              else { 
//                 st.push(ch); 
//             }
//         } 
//         return st.size(); 
//     }
// };


class Solution {
public:
    int minLength(string s) {
        stack<char> stack;

        for (int i = 0; i < s.length(); i++) {
            char cur_char = s[i];

            if (stack.empty()) {
                stack.push(cur_char);
                continue;
            }

            if (cur_char == 'B' && stack.top() == 'A') {
                stack.pop();
            }
            else if (cur_char == 'D' && stack.top() == 'C') {
                stack.pop();
            }
            else {
                stack.push(cur_char);
            }
        }

        return stack.size();
    }
};