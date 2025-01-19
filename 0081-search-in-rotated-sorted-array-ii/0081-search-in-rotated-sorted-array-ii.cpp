class Solution {
public:
    bool search(vector<int>& nums, int target) {
        set<int> s(nums.begin(), nums.end());
        int low=0;
        int high=nums.size()-1;
        if(s.find(target)!=s.end()){
            return true;
        }
        return false;
    }
};