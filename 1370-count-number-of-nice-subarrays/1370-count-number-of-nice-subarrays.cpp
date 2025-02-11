class Solution {
public:
     int helper(vector<int>& arr, int goal) {
        if (goal < 0) return 0;
        int l = 0, r = 0, cnt = 0;
        int sum = 0;

        while (r < arr.size()) {
            sum += arr[r]%2;

            while (sum > goal) {
                sum -= arr[l]%2;
                l++;
            }

            cnt += r - l + 1;
            r++;
        }
        return cnt;
    }

    int numberOfSubarrays(vector<int>& arr, int k) {
        return helper(arr, k) - helper(arr, k - 1);
    }
};