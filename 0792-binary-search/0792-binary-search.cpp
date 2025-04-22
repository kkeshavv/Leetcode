class Solution {
public:
    int search(vector<int>& arr, int target) {
        int n=arr.size();
        int l=0;
        int r=n-1;
        while(l<=r){
            int mid=(l+r)/2;
            if(arr[mid]==target){
                return mid;
            }
            else if(arr[mid]>target){
                r--;
            }
            else{
                l++;
            }
        }
        return -1;
    }
};