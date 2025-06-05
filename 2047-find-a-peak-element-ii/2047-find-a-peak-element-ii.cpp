class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        vector<int> largest= {-1, -1};
        int lar=INT_MIN;
        int m=mat.size();
        int n=mat[0].size();
 
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]>lar){
                    lar = mat[i][j]; 
                    largest={i,j};
                }
            }
        }
        return largest; 
    }
};