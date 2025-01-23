// binary search using recursion 

class Solution {
public:
    int helper(vector<int>& arr, int target,int low,int high){
        if (low > high) {
            return -1; // Target not found
        }
        int mid=(low+high)/2; 
        if(arr[mid]==target){
            return mid; 
        }
        else if(arr[mid]<target){
            return helper(arr,target,mid+1,high);
        }
        else if(arr[mid]>target){
            return helper(arr,target,low,mid-1);
        }
        else{
            return -1; 
        }

    }
    int search(vector<int>& arr, int target) {
         int low=0;
        int high=arr.size()-1; 
        return helper(arr,target,low,high);
    }  
}; 