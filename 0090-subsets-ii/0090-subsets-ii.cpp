class Solution {
public:
    void helper(vector<int>& nums,vector<int>& ans,vector<vector<int>>&allsubsets,int i){
        // base case
        if(i==nums.size()){
            allsubsets.push_back(ans);
            return;
        }

        // inclusion

        ans.push_back(nums[i]);
        helper(nums,ans,allsubsets,i+1);

        // exclusion
        ans.pop_back();
        while((i+1)<nums.size() && nums[i]==nums[i+1]){
            i++;
        }
        helper(nums,ans,allsubsets,i+1);
        


    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>ans;
        vector<vector<int>>allsubsets;
        // int indx=i+1;
        helper(nums,ans,allsubsets,0);
        return allsubsets;

        
    }
};