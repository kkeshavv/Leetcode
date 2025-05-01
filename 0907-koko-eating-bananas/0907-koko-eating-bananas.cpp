class Solution {
public:
    long long helper(vector<int>& piles, int k) {
        long long hours = 0;
        for (int i = 0; i < piles.size(); i++) {
            hours += (piles[i] + k - 1) / k;
        }
        return hours;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1;
        int r = *max_element(piles.begin(), piles.end());
        int ans = r;

        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (helper(piles, mid) <= (long long)h) {
                ans = mid;
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }

        return ans;
    }
};
