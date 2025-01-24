class Solution {
public:
    void helper(vector<int>& nums,vector<int>& ans,vector<vector<int>>&allpermute,int i){
        // base case
        if(i==nums.size()){
            allpermute.push_back(ans);
            return;
        }

        for(int j=i;j<nums.size();j++){
            swap(nums[i],nums[j]); 
            ans.push_back(nums[i]);
            helper(nums,ans,allpermute,i+1);


            // backtracking
            ans.pop_back();
            swap(nums[i], nums[j]);
        }


        
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int>ans;
        vector<vector<int>>allpermute;
        helper(nums,ans,allpermute,0);
        return allpermute;
    }
};