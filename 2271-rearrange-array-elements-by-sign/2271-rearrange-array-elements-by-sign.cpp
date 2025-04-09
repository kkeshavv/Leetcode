class Solution {
public:
    vector<int> rearrangeArray(vector<int>& arr) {
        vector<int>pos;
        vector<int>neg;
        int n=arr.size();
        for(int i=0;i<n;i++){
            if(arr[i]>=0){
                pos.push_back(arr[i]);
            }
            else{
                neg.push_back(arr[i]);
            }
        }
        vector<int>ans;
        int p=0,ne=0;
        for(int i=0;i<n;i++){
            if(i%2==0){
                ans.push_back(pos[p]);
                p++;
            } 
            else{
                ans.push_back(neg[ne]);
                ne++;
            }
        }
        return ans;
    }
};