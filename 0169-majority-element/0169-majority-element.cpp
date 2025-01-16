class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> freq;
         int majorityCount = nums.size() / 2;
        for (int num : nums) {
        freq[num]++;
        if (freq[num] > majorityCount) {
                return num;
            }
    }
    return -1;
        
    }
};