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
ll doSolve(ll ith, ll sum, vector<vector<ll>> &dp){
	ll ans = 0;
	if(sum==0){
		return 1;
	}
	if(ith==0 || sum < 0){
		return 0;
	}
	if(dp[ith][sum]!=-1) return dp[ith][sum];
	ans = doSolve(ith-1,sum-ith,dp)%mod + doSolve(ith-1,sum,dp)%mod;
	ans = ans%mod;
	return dp[ith][sum] = ans;
}

void solve()
{
  ll n;
  cin>>n;
  ll sum = (n*(n+1))/2;
  if(sum%2==1){
  	cout<<0<<endl;
  	return;
  }
  ll sum1= sum/2;
  vector<vector<ll>> dp(n+1,vector<ll>(sum1+1,-1));
  
  for(ll i=0;i<=n;++i){
  	for(ll j=0;j<=sum1;++j){
  		if(j==0){
  			dp[i][j]=1;
		  }else if(i==0){
		  	dp[i][j] = 0;
		  }else{
		  	dp[i][j] = dp[i-1][j]%mod;
		  	if(j-i>=0){
		  		dp[i][j] += dp[i-1][j-i];
		  		dp[i][j] %=mod;
			  }
		  }
	  }
  }
  
  ll modular = 500000004;
  cout<<(dp[n][sum1] * modular)%mod<<endl;
  //cout<<doSolve(n,sum1,dp)/2<<endl;
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

