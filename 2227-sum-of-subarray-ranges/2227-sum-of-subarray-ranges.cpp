class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        long long total = 0;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            int minVal = nums[i];
            int maxVal = nums[i];
            for (int j = i; j < n; j++) {
                minVal = min(minVal, nums[j]);
                maxVal = max(maxVal, nums[j]);
                total += (maxVal - minVal);
            }
        }

        return total;
    }
};