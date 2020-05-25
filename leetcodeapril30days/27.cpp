class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int n = matrix.size();
        if(n==0) return 0;
        int m = matrix[0].size();
        int dp[n+1][m+1];
        dp[0][0]=0;
        int maxi=0;
        
        for(int i=0;i<=n;++i){
            for(int j=0;j<=m;++j){
                if(i==0||j==0)dp[i][j]=0;
                else{
                    if(matrix[i-1][j-1]=='1'){
                        dp[i][j] = min(dp[i-1][j],min(dp[i][j-1],dp[i-1][j-1]))+1;
                        maxi = max(dp[i][j], maxi);
                    }else{
                        dp[i][j]=0;
                    }
                }
            }
        }
        // for(int i=0;i<=n;++i){
        //     for(int j=0;j<=m;++j){
        //         cout<<dp[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        // return dp[n][m]*dp[n][m];
        return maxi*maxi;
    }
};
// [["1","0","1","0","0"],
//  ["1","0","1","1","1"],
//  ["1","1","1","1","1"],
//  ["1","0","0","1","0"]]
 
// 0 0 0 0 0 0
// 0 1 0 1 
// 0
// 0
// 0
