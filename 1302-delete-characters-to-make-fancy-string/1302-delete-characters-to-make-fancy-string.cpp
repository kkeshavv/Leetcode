class Solution {
public:
    string makeFancyString(string s) {
       string result; // To store the final fancy string

    for (char c : s) {
        // Check the last two characters in the result
        if (result.size() >= 2 && result[result.size() - 1] == c && result[result.size() - 2] == c) {
            continue; // Skip this character to avoid three consecutive
        }
        result.push_back(c); // Add the current character to the result
    }

    return result; // Return the final fancy string
    }
};
