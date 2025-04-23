class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int target) {
        int n = arr.size();
        int l = 0, r = n - 1;
        vector<int> ans = {-1, -1};

        // Leftmost (first) occurrence
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (arr[mid] < target) {
                l = mid + 1;
            } else {
                r = mid - 1;
            }
            if (arr[mid] == target) ans[0] = mid;
        }

        // Reset l and r
        l = 0;
        r = n - 1;

        // Rightmost (last) occurrence
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (arr[mid] <= target) {
                l = mid + 1;
            } else {
                r = mid - 1;
            }
            if (arr[mid] == target) ans[1] = mid;
        }

        return ans;
    }
};
