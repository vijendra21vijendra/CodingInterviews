class Solution {
public:
    int integerBreak(int n) {
        if(n<=6){
            if(n%2==0) return n/2 * n/2;
            else return n/2 *(n/2 + 1);
        }
        
        vector<pair<int,int>> dp;
        dp.push_back({0,2});
        for(int i=7;i<=n;++i){
            int f,s;
            f  = dp[i-7].first;
            s = dp[i-7].second;
            if(f==0){
                dp.push_back(make_pair(f+2,s-1));
            }else{
                dp.push_back(make_pair(f-1,s+1));
            }
        }
        pair<int,int> lp = dp.back();
        return pow(2,lp.first) * pow(3,lp.second);
    }
};
/*
2 -> 1
3 -> 1,2 = 2
4 => 2,2 = 4
5 => 2,3 = 6
6 => 3,3 = 9
7 => 2,2,3 = 12
8 => 3,3,2 = 18
9 => 3,3,3 = 27
10 => 3,3,2,2 = 36
11 =>  = 48 || 2,3,3,3 = 54









*/
