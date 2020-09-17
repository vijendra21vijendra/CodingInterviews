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
ll dp[1000001];
void init(ll n){
	for(ll i=0;i<=n;++i){
		dp[i]=-1;
	}
}
void printArr(int n){
	for(int i=0;i<=n;++i){
		cout<<dp[i]<<" ";
	}
	cout<<endl;
}
void solve()
{
  ll n,x;
  cin>>n>>x;
  ll arr[n];
  for(ll i=0;i<n;++i){
  	cin>>arr[i];
  }
  // now make a dp state
  init(x);
  dp[0] = 0;
  for(ll i=1;i<=x;++i){
  	
  	ll mcoins = inf;
  	for(ll j=0;j<n;++j){
  		if(i-arr[j]>=0 && dp[i-arr[j]]!=-1){
  			mcoins = min(mcoins, dp[i-arr[j]] + 1);
		  }
	  }
	  if(mcoins < inf){
	    dp[i] = mcoins;	
	  }
  }
  cout<<dp[x]<<endl;
  //printArr(x);
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

