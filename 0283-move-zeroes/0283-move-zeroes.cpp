class Solution {
public:
    void moveZeroes(vector<int>& a) {
        int j = -1;
        int n = a.size();

        // Find the first occurrence of zero
        for (int i = 0; i < n; i++) {
            if (a[i] == 0) {
                j = i;
                break;
            }
        }

        // If there are no zeros, return early
        if (j == -1) return;

        // Move non-zero elements and swap them with zeros
        for (int i = j + 1; i < n; i++) {
            if (a[i] != 0) {
                swap(a[i], a[j]);
                j++;
            }
        }
    }
};
