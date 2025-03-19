class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l=0;
        int r=0;
        int n=nums.size();
        int zerocount=0;
        int maxlen=0;
        while(r<n){
           if(nums[r]==0){
            zerocount++;
           }
            while(zerocount>k){
                if(nums[l]==0){
                    zerocount--;
                    
                }
                l++;
            }

            r++;
            
            maxlen=max(maxlen,r-l);
        }
       return maxlen; 
    }
};