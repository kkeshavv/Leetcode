class Solution {
public:
    void moveZeroes(vector<int>& arr) {
        int l=0;
        int r=0;
        int n=arr.size();
        while(r<n){
            if((arr[l]==0)&&arr[r]==0){
                // l++;
                r++;
            }
            else if(arr[l]!=0 && arr[r]!=0){
                l++;
                r++;
            }
            else if(arr[l]==0 && arr[r]!=0){
                swap(arr[l],arr[r]);
                l++;
                r++;

            }
            else if(arr[l]!=0 && arr[r]==0){
                r++;
            }
        }
    }
};