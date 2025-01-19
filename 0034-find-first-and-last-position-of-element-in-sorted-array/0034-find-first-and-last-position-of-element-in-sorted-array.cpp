class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int target) {
        vector<int> v = {-1, -1};
        int n = arr.size();
        int low = 0;
        int high = n - 1;

        // Find the left boundary
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
            if (arr[mid] == target) {
                v[0] = mid;
            }
        }

        // Reset variables for right boundary search
        low = 0;
        high = n - 1;

        // Find the right boundary
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] > target) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
            if (arr[mid] == target) {
                v[1] = mid;
            }
        }

        return v;
    }
};
