class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int count=0;
        int lastsmaller=INT_MIN;
        int longest=1;
        if(n==0) return 0;
        for(int i=0;i<n;i++){
            if(nums[i]-1==lastsmaller){
                count++;
                lastsmaller=nums[i];
            }
            else if(nums[i]!=lastsmaller){
                count=1;
                lastsmaller=nums[i];
            }
             longest = max(longest, count);
        }
       return longest; 
    }
};