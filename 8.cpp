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
  ll n,m;
  cin>>n>>m;
  ll arr[n];
  for(int i=0;i<n;++i){
  	cin>>arr[i];
  }
  // now make dp state
  ll dp[n+1][m+1];
  for(int i=1;i<=n;++i){
  	for(int j=1;j<=m;++j){
  		
  		
  		if(arr[i-1]!=0 && arr[i-1]!=j){
  			  dp[i][j] = 0;
		  }else{
		  	
		  	if(i==1){
		  		dp[i][j] = 1;
			  }else{
				dp[i][j] = dp[i-1][j];
			  	dp[i][j] += (j>1)?(dp[i-1][j-1]):(0);
			  	dp[i][j] += (j<m)?(dp[i-1][j+1]):(0);
			  	dp[i][j] = dp[i][j]%mod;	
			  }
		  }
		 // cout<<dp[i][j]<<" ";
	  }
	  //cout<<endl;
  }
  ll ans = 0;
  for(int i=1;i<=m;++i){
  	ans +=dp[n][i];
  	ans = ans%mod;
  }
 cout<<ans<<endl;
}

int main()
{
	ll test=1;
//	cin>>test;
	while(test--)
	{
		solve();
	}
	return 0;
}

