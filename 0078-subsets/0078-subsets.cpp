class Solution {
public:
    void getallsubsets(vector<int>& nums, vector<int>&ans,vector<vector<int>>&allsubsets,int i,int n){
        if(i==n){ 
        // store subsets;
        allsubsets.push_back(ans);
        return;
        }
 
        // inclusion
        ans.push_back(nums[i]);
        getallsubsets(nums,ans,allsubsets,i+1,n);

        // exclusion
        ans.pop_back();
        getallsubsets(nums,ans,allsubsets,i+1,n);


    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>allsubsets;
        vector<int>ans;
        int i=0;
        int n=nums.size();
        getallsubsets(nums,ans,allsubsets,0,n);
        return allsubsets;
    }  
};