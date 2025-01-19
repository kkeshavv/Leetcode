class Solution {
public:
    int search(vector<int>& arr, int k) {
        int low = 0, high = arr.size() - 1;  // Use arr.size() to get the size of the array
        while (low <= high) {
            int mid = (low + high) / 2;

            // If mid points to the target
            if (arr[mid] == k) return mid;

            // If left part is sorted
            if (arr[low] <= arr[mid]) {
                if (arr[low] <= k && k <= arr[mid]) {
                    // Element exists in the left part
                    high = mid - 1;
                }
                else {
                    // Element does not exist in the left part
                    low = mid + 1;
                }
            }
            else { // If right part is sorted
                if (arr[mid] <= k && k <= arr[high]) {
                    // Element exists in the right part
                    low = mid + 1;
                }
                else {
                    // Element does not exist in the right part
                    high = mid - 1;
                }
            }
        }
        return -1;  // Element not found
    }
};
