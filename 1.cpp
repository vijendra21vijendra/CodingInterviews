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
		dp[i]=0;
	}
}

void solve()
{
  ll n;
  cin>>n;
  init(n);
  dp[0]=1;
  for(ll i=1;i<=n;++i){
  	ll val = 0;
  	  for(ll j=i-1;j>=0 && j>=i-6;--j){
  	  	  val += dp[j];
  	  	  val = val%mod;
		}
		dp[i]  = val;
  }
  cout<<dp[n]<<endl;
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

