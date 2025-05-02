class Solution {
public:
    int daysreq(vector<int>& weights, int cap){
        int day=1,load=0;
        for(int i=0;i<weights.size();i++){
            if(load+weights[i]>cap){
                day=day+1;
                load=weights[i];
            }
            else{
                load+=weights[i];
            }
        }
        return day;
    }
    int shipWithinDays(vector<int>& weights, int days) {

        int l=*max_element(weights.begin(),weights.end());
        int r=accumulate(weights.begin(),weights.end(),0);
        int ans=1;

        while(l<=r){
            int mid=(l+r)/2;

            if(daysreq(weights,mid)>days){
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