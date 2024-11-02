class Solution {
public:
    bool isCircularSentence(string sentence) {
        int n = sentence.length();
         if (sentence[0] != sentence[n - 1]) {
            return false;
        }
        for(int i=0;i<n;i++){
           if (sentence[i] == ' ') {
                // Check if the last char of previous word and first char of next word match
                if (sentence[i - 1] != sentence[i + 1]) {
                    return false;
                }
            }
        }

        return true;
    }
};