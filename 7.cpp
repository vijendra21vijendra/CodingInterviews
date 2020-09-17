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
  int n,x;
  cin>>n>>x;
  int vals[n],pages[n];
  for(int i=0;i<n;++i){
  	cin>>vals[i];
  }
   for(int i=0;i<n;++i){
  	cin>>pages[i];
  }
  
  //int dp[x+1][n+1];
  // now try with n+1,x+1
  vector<vector<int>> dp(n+1,vector<int>(x+1));
  for(int i=0;i<=n;++i){
  	for(int j=0;j<=x;++j){
  		if(i==0 || j==0){
  			dp[i][j] = 0;
		  }else{
		  	if(j >= vals[i-1]){
		  		dp[i][j] = max(pages[i-1]+ dp[i-1][j-vals[i-1]], dp[i-1][j]);
			  }else{
			  	dp[i][j] = dp[i-1][j];
			  }
		  }
	  }
  }
  cout<<dp[n][x]<<endl;
}
 
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int test=1;
	//cin>>test;
	while(test--)
	{
		solve();
	}
	return 0;
}
