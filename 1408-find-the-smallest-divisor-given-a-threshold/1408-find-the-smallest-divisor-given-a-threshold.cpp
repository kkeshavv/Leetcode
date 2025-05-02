class Solution {
public:
    int helper(vector<int>& nums,int val){
        int sum=0;
        for(auto it:nums){
            sum += (it + val - 1) / val;
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int l=1;
        int r=*max_element(nums.begin(),nums.end());
        int ans=-1;
        while(l<=r){
            int mid=(l+r)/2;

            if(helper(nums,mid)>threshold){
                l=mid+1;
            }
            else{
                ans=mid;
                r=mid-1;
            }
        }
        return ans;
    }
};