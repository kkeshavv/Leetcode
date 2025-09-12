class Solution {
public:
    int maxSubArray(vector<int>& arr) {
        int n=arr.size();
        int sum;
        int maxsum=INT_MIN;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(sum>maxsum){
                maxsum=max(sum,maxsum);
            }
            if(sum<0){
                sum=0;
            }
        }
        return maxsum;
    }
};