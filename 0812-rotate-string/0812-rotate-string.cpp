class Solution {
public:
    bool rotateString(string s, string goal) {
        bool answer =false;
        // Check if the lengths of s and goal are equal, otherwise rotation is impossible
        if (s.length() != goal.length()) {
            return false;
        }

        string s1 = s + s;
        size_t pos = s1.find(goal);
        
        // Check if the substring was not found
        if (pos == -1) {
            return false;
        }
        return true;
        
    }
};
