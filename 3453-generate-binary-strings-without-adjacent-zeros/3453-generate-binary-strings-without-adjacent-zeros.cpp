class Solution {
public:
    void helper(string current,vector<string>&result,int n){
        if(n==current.size()){
            result.push_back(current);   
            return;
        }
        // add zero
        if(current.empty() ||current.back()!='0'){
            helper(current+"0",result,n);
        }

        // add one
        helper(current+"1",result,n);

    }
    vector<string> validStrings(int n) {
        vector<string>result;
        helper("",result,n);
        return result;
    }
};