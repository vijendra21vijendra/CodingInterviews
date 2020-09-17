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
  ll n;
  cin>>n;
  ll arr[n];
  ll sum=0;
  for(int i=0;i<n;++i){
  	cin>>arr[i];
  	sum += arr[i];
  }
  ll dp[n][n];
  for(ll i=n-1;i>=0;--i){
  	for(ll j=i;j<n;++j){
  		if(i==j){
  			dp[i][j] = arr[i];
		  }else{
		  	// (i,j) = max((i,j-1), (i+1,j))
		  	dp[i][j] = max(arr[j]-dp[i][j-1], arr[i]-dp[i+1][j]);
		  }
	  }
  }
  //
  ll ans = 0;
  // so now in dp[0][n-1] we have max of s1-s2 and we want s1 so do it
  ans = (sum + dp[0][n-1])/2;
  cout<<ans<<endl;
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


