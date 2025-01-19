class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        map<int,int> a;
        for(auto n:nums){
            a[n]++;
        }
        for(auto p:a){
            if(p.second==1){
                return p.first;
            }
        }
        return -1;

    }
};