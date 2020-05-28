class Solution {
public:
    bool canPartition(vector<int>& nums) {
        // this problem can be transfered into the subset of this target problem
        int sum=0;
        for(auto num: nums){
            sum += num;
        }
        if(sum%2==1) return false;
        sum = sum/2;
        
        int dp[nums.size()+1][sum+1];
        for(int i=0;i<=nums.size();++i){
            for(int j=0;j<=sum;++j){
                if(j==0){
                    dp[i][j]=1;
                }else if(i==0){
                    dp[i][j]=0;
                }else{
                    if(dp[i-1][j]){
                        dp[i][j]=1;
                    }else{
                        int temp = j - nums[i-1];
                        if(temp>=0 && dp[i-1][temp]){
                            dp[i][j]=1;
                        }else{
                        dp[i][j]=0;
                        }
                    }
                }
            }
        }
        return dp[nums.size()][sum];
    }
};

