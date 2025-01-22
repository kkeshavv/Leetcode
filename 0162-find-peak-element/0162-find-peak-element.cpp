class Solution {
public:
    int findPeakElement(vector<int>& arr) {
        int n=arr.size();
        int low=0;
        int high=n-1;
        if(n==1) return 0;
        if(arr[n-1]>arr[n-2]) return n-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid]>arr[mid-1]){
                if(arr[mid]>arr[mid+1]){
                    return mid;
                }
            }
            if (mid > 0 && arr[mid - 1] > arr[mid]) {
                high = mid - 1; 
            } else {
                low = mid + 1; 
            }
        }
        return -1;
    }
};