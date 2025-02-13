class Solution {
public:
    int maxScore(vector<int>& arr, int k) {
        int n = arr.size();
        int lsum = 0, rsum = 0;

        // Calculate the sum of the first k elements from the left
        for (int i = 0; i < k; i++) {
            lsum += arr[i];
        }
        
        int maxsum = lsum;
        int rightIndex = n - 1;

        // Try taking elements from the right while removing from the left
        for (int i = k - 1; i >= 0; i--) {
            lsum -= arr[i];         // Remove the leftmost element
            rsum += arr[rightIndex]; // Add the rightmost element
            rightIndex--;
            
            maxsum = max(maxsum, lsum + rsum);
        }

        return maxsum;
    }
};
