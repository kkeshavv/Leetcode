class Solution {
public:
    bool isPalindromeHelper(string &s, int left, int right) {
        // Base case: If left pointer crosses right, it's a palindrome
        if (left >= right) {
            return true;
        }

        // Skip non-alphanumeric characters
        if (!isalnum(s[left])) {
            return isPalindromeHelper(s, left + 1, right);
        }
        if (!isalnum(s[right])) {
            return isPalindromeHelper(s, left, right - 1);
        }

        // Compare the characters (case-insensitive)
        if (tolower(s[left]) != tolower(s[right])) {
            return false;
        }

        // Recursively check the next pair of characters
        return isPalindromeHelper(s, left + 1, right - 1);
    }
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.size() - 1;
        return isPalindromeHelper(s, left, right);
    }
};