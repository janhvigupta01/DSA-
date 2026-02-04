class Solution {
  public:
    vector<int> boundaryTraversal(vector<vector<int>>& mat) {
        // code here
        int row=mat.size();
        int col=mat[0].size();
        vector<int>ans;
        for(int i=0;i<col;i++){
                ans.push_back(mat[0][i]);
            
        }
        if(row==1)return ans;
        for(int i=1;i<=row-1;i++){
                ans.push_back(mat[i][col-1]);
        }
        if(col==1)return ans;
        for(int i=col-2;i>=0;i--){
                ans.push_back(mat[row-1][i]);
        }
        for(int i=row-2;i>0;i--){
                ans.push_back(mat[i][0]);
        }
        return ans;
    }
};
