class Solution {
public:
    int missingNumber(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] != i) {
                return i;
            }
        }
        return arr.size();  // if last number is missing
    }
};
