class Solution {
public:
    int helper(vector<int>& arr, int k) {
        if (k < 0) return 0;
        int l = 0, r = 0, cnt = 0;
        int oddCount = 0;

        while (r < arr.size()) {
            // Count the odd numbers
            if (arr[r] % 2 != 0) oddCount++;

            // Move the left pointer if there are more than k odd numbers
            while (oddCount > k) {
                if (arr[l] % 2 != 0) oddCount--;
                l++;
            }

            // Add the number of subarrays that end at r with exactly k odd numbers
            cnt += r - l + 1;
            r++;
        }
        return cnt;
    }

    int numberOfSubarrays(vector<int>& arr, int k) {
        return helper(arr, k) - helper(arr, k - 1);
    }
};
