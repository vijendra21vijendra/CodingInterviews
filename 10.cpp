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
ll dp[501][501];
void init(ll a, ll b){
	for(int i=0;i<=a;++i){
		for(int j=0;j<=b;++j){
			dp[i][j] = -1;
		}
	}
}
ll solveIt(ll a, ll b){
	if(a==b){
		return dp[a][b] = 0;
	}
	ll mini = inf;
	
	if(dp[a][b]!=-1) return dp[a][b];
	for(int i=1;i<=b/2;++i){
		mini = min(mini, (solveIt(a,i)+solveIt(a,b-i)+1));
	}
	for(int i=1;i<=a/2;++i){
		mini = min(mini, (solveIt(i,b)+solveIt(a-i,b)+1));
	}
	return dp[a][b] = mini;
}



void solve()
{
  ll a,b;
  cin>>a>>b;
 // init(a,b);
  //cout<<solveItit(a,b)<<endl;
  for(ll i=1;i<=a;++i){
  	for(ll j=1;j<=b;++j){
  		if(i==j){
  			dp[i][j]=0;
		  }
		  else{
			ll mini = inf;
	  		for(ll k=1;k<=i/2;++k){
	  			mini = min(mini, dp[k][j]+dp[i-k][j]+(ll)1);
			  }
	  		for(ll k=1;k<=j/2;++k){
	  		   mini = min(mini, dp[i][k]+dp[i][j-k]+(ll)1);
			  }	
			  dp[i][j] = mini;
		  }
	  }
  }
  cout<<dp[a][b]<<endl;
  
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

