class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0,r=0;
        int n=s.length();
        int maxlen=0;
        set<char>p;
        while(r<n){
            if(p.find(s[r])==p.end()){ 
                p.insert(s[r]);
                maxlen=max(maxlen,(int)p.size()); 
                r++;
            }
            else{
                p.erase(s[l]);
                l++;
            }
        }
        return maxlen;
        
    }
};