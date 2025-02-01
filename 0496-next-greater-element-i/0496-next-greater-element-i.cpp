class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> nextGreater;
        stack<int> st;
        
        // Step 1: Process nums2 from right to left
        for (int i = nums2.size() - 1; i >= 0; i--) {
            int num = nums2[i];
            
            // Maintain a monotonic decreasing stack
            while (!st.empty() && st.top() <= num) {
                st.pop();  // Remove smaller elements
            }
            
            // If stack is not empty, top element is the next greater
            if (st.empty()) {
                nextGreater[num] = -1;
            } else {
                nextGreater[num] = st.top();
            }

            
            // Push current element to stack
            st.push(num);
        }
        
        // Step 2: Retrieve results for nums1 from the hash map
        vector<int> result;
        for (int num : nums1) {
            result.push_back(nextGreater[num]);
        }
        
        return result;
    }
};
