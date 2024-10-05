class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        sort(s1.begin(), s1.end());
        int s1Length = s1.length();
        int s2Length = s2.length();

        for (int i = 0; i <= s2Length - s1Length; ++i) {
            string subStr = s2.substr(i, s1Length);
            sort(subStr.begin(), subStr.end());
            if (subStr == s1) {
                return true; 
            }
        }
        return false; 
    }
};