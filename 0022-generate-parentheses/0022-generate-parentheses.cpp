class Solution {
public:
void helper(string current,vector<string>&result,int n,int open,int close){
    if(current.size()==2*n){
        result.push_back(current);
        return;
    }

    // adding ( braces
    if(open<n){
        helper(current+"(",result,n,open+1,close);
    }
    // adding ) braces
    // current.pop_back();
    if(close<open){
        helper(current+")",result,n,open,close+1); 
    }
}
    vector<string> generateParenthesis(int n) {
        vector<string>result;
        helper("",result,n,0,0);
        return result;
    }
};