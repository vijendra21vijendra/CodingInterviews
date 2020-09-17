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

int dp[1000001];
void init(int n){
	for(int i=0;i<=n;++i){
		dp[i] = -1;
	}
}
void solve()
{
  ll n;
  cin>>n;
  init(n);
  dp[0] =0;
  for(int i=1;i<=n;++i){
  	
  	int temp = i;
  	int mini = 10000002;
  	while(temp > 0){
  		 int t = temp%10;
  		 if(t> 0){
  		 	 mini = min(mini, 1 + dp[i-t]);
		   }
		   temp = temp/10;
	  }
  	dp[i] = mini;
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

