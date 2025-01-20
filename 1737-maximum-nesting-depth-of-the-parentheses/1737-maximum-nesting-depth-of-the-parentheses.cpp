class Solution {
public:
    int maxDepth(string s) {
       int n=s.length();
       int count=0;
       vector<int> ans;
       for(int i=0;i<n;i++){
        if(s[i]=='('){
            count++;
            ans.push_back(count);
        }
        if(s[i]==')'){
            count--;
            ans.push_back(count);
        }
       }
       if (ans.empty()) {
            return 0;
        }
       return *max_element(ans.begin(), ans.end());
    }
}; 