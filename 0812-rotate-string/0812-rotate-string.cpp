class Solution {
public:
    bool rotateString(string s, string goal) {
        // Check if the lengths of s and goal are equal, otherwise rotation is impossible
        if (s.length() != goal.length()) {
            return false;
        }

        string s1 = s + s;
        size_t found = s1.find(goal); // Store the result in a size_t variable
    
        // Check if goal is a substring of s1
        if (found != string::npos) {
            return true;
        } else {
            return false;
        }
    }
};
