#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define all(x) x.begin(),x.end()
#define mp(a,b) make_pair(a,b)
#define pb(x) push_back(x)
const ll mod = 1e9 + 7;
ll inf = 1e16;



void solve()
{
  string s1,s2;
  cin>>s1>>s2;
  int n = s1.length(), m = s2.length();
  int dp[n+1][m+1];
  // because adding one char in one string is exactly equal to removing one char from other string
  for(int i=0;i<=n;++i){
  	for(int j=0;j<=m;++j){
  		if(i==0){
  			dp[i][j] = j;
		  }else if(j==0){
		  	dp[i][j] = i;
		  }else{
		  	if(s1[i-1]==s2[j-1]){
		  		dp[i][j] = dp[i-1][j-1];
			  }else{
			  	dp[i][j] = 1 + min(dp[i-1][j-1], min(dp[i-1][j], dp[i][j-1]));
			  }
		  }
	  }
  }
  cout<<dp[n][m]<<endl;
}

int main()
{
	ll test=1;
	//cin>>test;
	while(test--)
	{
		solve();
	}
	return 0;
}

