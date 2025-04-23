class Solution {
public:
    int search(vector<int>& arr, int target) {
        int n=arr.size();
        int l=0;
        int r=n-1;
        int pivot=-1;
        for(int i=0;i<n-1;i++){
            if(arr[i]>arr[i+1]){
                pivot=i;
                break;
            }
        }

        if(pivot==-1){
            l=0;
            r=n-1;
        }
        else if(target>=arr[0]){
            l=0;
            r=pivot;
        }
        else{
            l=pivot+1;
            r=n-1;
        }

        while(l<=r){
            int mid=(l+r)/2;

            if(arr[mid]==target){
                return mid;
            }
            if(arr[mid]<target){
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
    return -1;
    }
};