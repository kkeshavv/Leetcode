// class Solution {
// public:
//     int findKthPositive(vector<int>& arr, int k) {
//         int num=1;
//         int n=arr.size();
//         int i=0;
//         while(i<n && k>0){
//             if(arr[i]==num){
//                 i++;
//             }
//             else{
//                 k--;
//             }
//             num++;
//         }

//         while(k--){
//             num++;
//         }
//         return num-1;
//     }
// };

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n=arr.size();
        int l=0,r=n-1;
        while(l<=r){
            int mid=(l+r)/2;
            int missing=arr[mid]-(mid+1);
            if(missing<k){
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        return l+k;
    }
};