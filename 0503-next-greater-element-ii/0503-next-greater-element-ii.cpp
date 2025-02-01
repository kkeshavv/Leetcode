class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& arr) {
        vector<int>dummy(arr.begin(),arr.end());
        for (int num : arr) {
            dummy.push_back(num); 
        }

        int n1=arr.size();
        int n2=dummy.size();
        stack<int>st;
        vector<int>ans;
        for(int i=n2-1;i>=0;i--){
            while(!st.empty()&&st.top()<=dummy[i]){
                st.pop();
            }
            if(st.empty()){
                ans.push_back(-1);
            }
            else{
                ans.push_back(st.top());
            }
            st.push(dummy[i]);
        }
        reverse(ans.begin(),ans.end());
       ans.resize(n1);
       return ans;
    }
};