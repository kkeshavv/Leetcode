class Solution {
public:
    int singleNumber(vector<int>& arr) {
        unordered_map<int, int> freq;

        // Count frequency of each element
        for (int num : arr) {
            freq[num]++;
        }

        // Find and return the element with frequency 1
        for (const auto& pair : freq) {
            if (pair.second == 1) {
                return pair.first;
            }
        }

        // This point should not be reached if there is always one element with frequency 1
        return -1;  // Optional, based on problem guarantees
    }
};
