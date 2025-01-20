class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int>p;
        map<char,int>q;
        if(s.length()!=t.length()) return false;
        for(auto num:s){
            p[num]++;
        }
        for(auto num:t){
            q[num]++;
        }
        for(auto i:p){
            if(q[i.first]!=i.second)
            return false;
        }
        return true;

    }
};