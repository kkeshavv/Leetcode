// --------------------------------brute------------------------
// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         int m=matrix.size();
//         int n=matrix[0].size();
//         bool ans=false;
//         for(int i=0;i<m;i++){
//             for(int j=0;j<n;j++){
//                 if(matrix[i][j]==target){
//                     ans=true;
//                 }
//             }
//         }
//         return ans;
//     }
// };
// ---------------------------------optimal---------------------------------------------------
// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         int m=matrix.size();
//         int n=matrix[0].size();
//         int low=0;
//         int high=(n*m)-1;
//          bool ans=false;
//         while(low<=high){
//             int mid=(low+high)/2;

//             int row=mid/n;
//             int col=mid%n;
           

//             if(matrix[row][col]==target) {
//                 ans= true;
//                 break;
//             }
//             else if(matrix[row][col]<target){
//                 low=mid+1;
//             }
//             else{
//                 high=mid-1;
//             }
//         }
//         return ans;
//     }
// };

// ------------------------------------------better------------------------------------------
class Solution {
public:
    bool finding(vector<int>& arr,int target){
        int low=0;
        int high=arr.size()-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid]==target){
                return true;
                break;
            }
            else if(arr[mid]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        for(int i=0;i<m;i++){
           if(target >= matrix[i][0] && target <= matrix[i][n - 1]){
             if (finding(matrix[i], target)) return true;
           }
        }
        return false;
    }
};