class Solution {
public:
     int search(vector<int>& arr, int k) {
        int n=arr.size(); 
        int l=0;
        int r=n-1;
        while(l<=r){
            int mid=(l+r)/2;

            if (arr[mid] == k) return mid;

            if(arr[l]<=arr[mid]){
                if(arr[l]<=k && k <= arr[mid]){
                r=mid-1;
            }
            else{
                l=mid+1;
            }
            }
            else{
                if(arr[mid]<=k && k<= arr[r]){
                    l=mid+1;
                }
                else{
                    r=mid-1;
                }
            }
        }
        return -1;
    }
};