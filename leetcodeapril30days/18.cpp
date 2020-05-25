class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> sums(n,vector<int>(m));
        sums[0][0] = grid[0][0];
        for(int i=1;i<n;++i){
            sums[i][0] = sums[i-1][0] + grid[i][0];
        }
        for(int i=1;i<m;++i){
            sums[0][i] = sums[0][i-1] + grid[0][i];
        }
        for(int i=1;i<n;++i){
            for(int j=1;j<m;++j){
                sums[i][j]  = min(sums[i][j-1], sums[i-1][j]) + grid[i][j];
            }
        }
        return sums[n-1][m-1];
    }
};
