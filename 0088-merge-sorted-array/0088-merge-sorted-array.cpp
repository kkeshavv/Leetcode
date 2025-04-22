class Solution {
public:
    void merge(vector<int>& arr1, int m, vector<int>& arr2, int n) {
       vector<int> arr3(m + n); 
        int left=0;
        int right=0;
        int index=0;
        while(left<m && right<n){
            if(arr1[left]<arr2[right]){
                arr3[index]=arr1[left];
                index++;
                left++;
            }
            else{
                arr3[index]=arr2[right];
                index++;
                right++;
            }
        }
            while(left<m){
                arr3[index]=arr1[left];
                index++;
                left++;
            }
            while(right<n){
                arr3[index]=arr2[right];   
                index++;
                right++;
            } 
        

        for (int i = 0; i < m + n; i++) {
            arr1[i] = arr3[i];
        }
    }
};