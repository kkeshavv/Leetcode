class Solution {
public:
    int longestConsecutive(vector<int>& arr) {
        set<int> s;
        int n=arr.size();
        for(int i=0;i<n;i++){
            s.insert(arr[i]); 
        }
        if(n==0) return 0;
        int cnt=0;
        int longest=1;
        int lastsmaller=INT_MIN;
          for (auto num : s) {
            if(num-1==lastsmaller){
                cnt++;
                lastsmaller=num;
            }
            else if(num != lastsmaller){
                cnt=1;
                lastsmaller=num;
            }
             longest=max(longest,cnt); 
        }
        return longest;
    }
};