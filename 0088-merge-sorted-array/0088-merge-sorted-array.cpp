// class Solution {
// public:
//     void merge(vector<int>& arr1, int m, vector<int>& arr2, int n) {
//         // Temporary array to hold merged result
//         vector<int> arr3(m + n); 
//         int left = 0;
//         int right = 0;
//         int index = 0;

//         // Merging arr1 and arr2 into arr3
//         while (left < m && right < n) {
//             if (arr1[left] < arr2[right]) {
//                 arr3[index] = arr1[left];
//                 left++;
//             } else {
//                 arr3[index] = arr2[right];
//                 right++;
//             }
//             index++;
//         }

//         // Copy remaining elements from arr1, if any
//         while (left < m) {
//             arr3[index] = arr1[left];
//             left++;
//             index++;
//         }

//         // Copy remaining elements from arr2, if any
//         while (right < n) {
//             arr3[index] = arr2[right];
//             right++;
//             index++;
//         }

//         // Copy the merged result back into arr1
//         for (int i = 0; i < m + n; i++) {
//             arr1[i] = arr3[i];  // Copy the result into arr1 (no need to copy to arr2)
//         }
//     }
// };


class Solution {
public:
    void merge(vector<int>& arr1, int m, vector<int>& arr2, int n) {
        int left=m-1;
        int right=0;
        while(left>=0 && right<n){
            if(arr1[left]>arr2[right]){
                swap(arr1[left],arr2[right]);
                left--;
                right++;
            }
            else{
                break;
            }
        }
        sort(arr1.begin(), arr1.begin() + m);
        sort(arr2.begin(),arr2.end());

        for (int i = 0; i < n; i++) {
            arr1[m + i] = arr2[i];
        }
    }
};