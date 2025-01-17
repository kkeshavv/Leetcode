class Solution {
public:
    int bs(vector<int>& nums,int low,int high, int target){
       if (low>high) return -1;
        int mid=(low+high)/2;
        if(nums[mid]==target) return mid;  
        else if(nums[mid]<target) return bs(nums,mid+1,high,target);
        else return bs(nums,low,mid-1,target);

    }
    int search(vector<int>& nums, int target) {
       int low=nums[0];
       int high=nums.size()-1; 
    //    int mid=(low+high)/2;

      return bs(nums,0,nums.size()-1,target); 
    }
};