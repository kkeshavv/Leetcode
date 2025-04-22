// class Solution {
// public:
//     int maxProduct(vector<int>& arr) {
//         int maxprod=INT_MIN;
//         int n=arr.size();
//         for(int i=0;i<n;i++){
//             int prod=1;
//             for(int j=i;j<n;j++){
//                 prod*=arr[j];
//                 maxprod=max(maxprod,prod);
//             }  
//         }
//         return maxprod;
//     }
// };

class Solution {
public:
    int maxProduct(vector<int>& arr) {
        int maxprod=INT_MIN;
        int n=arr.size();
        int pref=1;
        int suff=1;
        for(int i=0;i<n;i++){
            if(pref==0) pref=1;
            if(suff==0) suff=1;

            pref*=arr[i];
            suff*=arr[n-i-1];
            maxprod=max(maxprod,max(pref,suff));

        }
        return maxprod;
    }
};
