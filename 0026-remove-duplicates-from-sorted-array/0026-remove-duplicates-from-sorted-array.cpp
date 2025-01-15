class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        if (arr.empty()) return 0;

        int i = 0;
        int n = arr.size();

        for (int j = 1; j < n; j++) {
            if (arr[j] != arr[i]) {
                i++;
                arr[i] = arr[j];
            }
        }

        return i+1; 
    }
};
