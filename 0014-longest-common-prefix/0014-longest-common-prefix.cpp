class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";  // Handle empty input
        
        sort(strs.begin(), strs.end());  // Sort the strings
        
        string first = strs[0];  // First string after sorting
        string last = strs[strs.size() - 1];  // Last string after sorting
        string ans = "";  // Initialize the answer string
        
        // Loop through characters, limited by the length of the shorter string
        for (int i = 0; i < min(first.length(), last.length()); ++i) {
            if (first[i] == last[i]) {
                ans.push_back(first[i]);  // Append matching character to ans
            } else {
                break;  // Stop when characters don't match
            }
        }
        
        return ans;  // Return the longest common prefix
    }
};
