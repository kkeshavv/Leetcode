class Solution {
public: 
    long long helper(vector<int>& piles,int k){
        long long hours=0;
        for(auto it:piles){
            hours+=it/k; 
            if(it %k !=0){
            hours++;
        }
        }
        return hours;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1;
        int r=*max_element(piles.begin(),piles.end());
        int ans=INT_MAX;
        while(l<=r){
            int mid=(l+r)/2;

            if(helper(piles,mid)>h){
                l=mid+1;
                
            }
            else{
                ans=mid;
                r=mid-1;
            }
        }
        return ans;
    }
};