class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char>s1;
        int n=s.length();
        int l=0;
        int r=0;
        int maxlen=0;
        while(r<n){
           if(s1.find(s[r])==s1.end()){
            s1.insert(s[r]);
            r++;
            maxlen=max(maxlen,(int)s1.size());
           } 

           else{
            s1.erase(s[l]);
            l++;
           }
        }
        return maxlen;
    }
};