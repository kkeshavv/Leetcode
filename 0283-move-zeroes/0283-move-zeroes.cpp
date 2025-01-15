class Solution {
public:
    void moveZeroes(vector<int>& arr) {
        int j=-1;
        int n=arr.size();
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                j=i;
                break;
            }
        }
         if (j == -1) return;
        for(int i = j + 1; i < n; i++){
            if(arr[i]!=0){
                swap(arr[i],arr[j]);
                j++;
            }
        }
    }
}; 