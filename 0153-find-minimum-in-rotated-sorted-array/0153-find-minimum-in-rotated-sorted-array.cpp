class Solution {
public:
    int findMin(vector<int>& nums) {
      set<int>s(nums.begin(),nums.end());
      
        return *s.begin();
       
    }
};