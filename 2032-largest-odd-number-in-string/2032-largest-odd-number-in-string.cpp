class Solution {
public:
    string largestOddNumber(string arr) {
        // int number=stoi(num);
        int n=arr.length();
        for(int i=n;i>=0;i--){
            if((arr[i]-'0' )%2 !=0 ){
                return arr.substr(0,i+1);
            }
        }
        return "";
    }
};