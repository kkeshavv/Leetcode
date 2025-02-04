class Solution {
public:
    vector<int> asteroidCollision(vector<int>& arr) {
        stack<int>st;
        int n=arr.size();
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(st.empty()||arr[i]>0){
                st.push(arr[i]);
            }
            else{
               while (!st.empty() && st.top() > 0 && arr[i] < 0){
                    if(st.top() < -arr[i]){
                        st.pop();
                        continue;
                    }
                    else if(st.top()== -arr[i]){
                        st.pop();
                         arr[i] = 0;
                    }
                    else{
                        arr[i]=0;
                    }
                    
                }
                if (arr[i] != 0) {
                    st.push(arr[i]);
                }
            }
        }
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};