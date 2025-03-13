class Solution {
public:
    void nextPermutation(vector<int>& arr) {
        int n = arr.size();
        int i = n - 2;

        // Step 1: Find first decreasing element from the right
        while (i >= 0 && arr[i] >= arr[i + 1]) {
            i--;
        }

        if (i >= 0) { // Only proceed if a valid pivot is found
            int index1 = i;
            int index2 = -1;

            // Step 2: Find the smallest element greater than arr[index1]
            for (int j = n - 1; j > i; j--) {
                if (arr[j] > arr[index1]) {
                    index2 = j;
                    break;
                }
            }

            // Swap arr[index1] and arr[index2]
            swap(arr[index1], arr[index2]);
        }

        // Step 3: Reverse the suffix (ensures the smallest lexicographic order)
        reverse(arr.begin() + i + 1, arr.end());
    }
};
