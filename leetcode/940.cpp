class Solution {
public:
    const int inf = 1e9 + 7;
    int distinctSubseqII(string S) {
        long long n = S.length();
        long long dp[n+1];
        dp[0]=1;
        
        int lastIndex[26]; // means till now no last index for any char
        for(int i=0;i<26;++i){
            lastIndex[i] = -1;
        }
        for(int i=0;i<n;++i){
            dp[i+1] = dp[i]*2;// first double all then minus which are counted twice
            dp[i+1] %= inf;
            if(lastIndex[S[i]-'a']>=0){
                // means last index found
                dp[i+1] -= dp[lastIndex[S[i]-'a']];
                 dp[i+1] %= inf;
            }
            lastIndex[S[i]-'a'] = i;
            cout<<dp[i+1]<<endl;
        }
        dp[n] -= 1;
        if(dp[n] <0) dp[n] += inf;// if minus from it when it was less than minus
        return dp[n];  
    }
};
