class Solution {
public:
    int missingNumber(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int j=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]!=j){
                break;
            }
            j++;
        }
        return j;
    }
};