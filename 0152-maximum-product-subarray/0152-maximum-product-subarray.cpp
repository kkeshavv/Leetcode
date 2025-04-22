class Solution {
public:
    int maxProduct(vector<int>& arr) {
        int maxprod=INT_MIN;
        int n=arr.size();
        for(int i=0;i<n;i++){
            int prod=1;
            for(int j=i;j<n;j++){
                prod*=arr[j];
                maxprod=max(maxprod,prod);
            }  
        }
        return maxprod;
    }
};