class Solution {
public:
    int findMin(vector<int>& arr) {
        int n=arr.size();
        int l=0;
        int r=n-1;
        int ans=INT_MAX;
        while(l<=r){
            int mid=(l+r)/2;
            // check left half
            if(arr[l]<=arr[mid]){
                ans=min(ans,arr[l]);
                l=mid+1;
            }
            // check right half
            else{
                ans=min(ans,arr[mid]);
                r=mid-1;
            }
        }
        return ans;
    }
};