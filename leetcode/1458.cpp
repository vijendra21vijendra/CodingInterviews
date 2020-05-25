class Solution {
public:
    const int inf = -1000000;
    int maxDotProduct(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size(),m = nums2.size();
        int dp[n+1][m+1];
        for(int i=0;i<=n;++i){
            for(int j=0;j<=m;++j){
                if(i==0||j==0){
                    dp[i][j]=inf;
                }else{
                    dp[i][j] =  max(nums1[i-1]*nums2[j-1],max(dp[i-1][j] , max(dp[i][j-1], max(dp[i-1][j-1] + nums1[i-1]*nums2[j-1], dp[i-1][j-1]))));
                }
            }
        }
        return dp[n][m];
    }
};
