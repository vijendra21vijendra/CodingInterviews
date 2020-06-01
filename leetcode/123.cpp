class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int k=2;
        int n = prices.size();
        if(n==0) return 0;
        int dp[k+1][n];
        for(int i=0;i<=k;++i){
            int maxDiff = -prices[0];
            for(int j=0;j<n;++j){
                if(i==0||j==0) dp[i][j] = 0;
                else{
                     // dp[i][j] = max(dp[i][j-1],"something");
                     int maxi=0;
                    // for(int l=0;l<j;++l){
                    //     maxi = max(maxi, dp[i-1][l] + prices[j]-prices[l]);
                    // }
                  dp[i][j] = max(dp[i][j-1],maxDiff+ prices[j]);
                  maxDiff = max(maxDiff, dp[i-1][j]-prices[j]);
                }
            }
        }
        return dp[k][n-1];
    }
};
