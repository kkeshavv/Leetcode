class Solution {
public:
    bool check(vector<int>& arr) { 
        int n = arr.size();
        
        // Count how many times the order breaks (i.e., arr[i] > arr[i+1])
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] > arr[(i + 1) % n]) {
                count++;
            }
        }
        
        // If there's more than 1 break, it can't be rotated to become sorted
        return count <= 1;
    }
};
