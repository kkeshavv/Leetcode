class Solution {
public:
    void helper(vector<int>& arr, vector<int>& current, vector<vector<int>>& result, int n, int i) {
        if (i == n) {
            result.push_back(current); // Add the current subset to the result
            return;
        }

        // Include the current element
        current.push_back(arr[i]);
        helper(arr, current, result, n, i + 1);

        // Exclude the current element
        current.pop_back();
        helper(arr, current, result, n, i + 1);
    }

    vector<vector<int>> subsets(vector<int>& arr) {
        int n = arr.size();
        vector<int> current;
        vector<vector<int>> result;
        helper(arr, current, result, n, 0); // Start the recursion
        return result;
    }
};
