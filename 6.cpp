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
  char matrix[n][n];
  for(int i=0;i<n;++i){
  	for(int j=0;j<n;++j){
  		cin>>matrix[i][j];
	  }
  }
  
  if(matrix[0][0]=='*' || matrix[n-1][n-1]=='*'){
  	cout<<0<<endl;
  	return;
  }
  
  ll dp[n][n];
  for(ll i=0;i<n;++i){
  	for(ll j=0;j<n;++j){
  		 if(i==0 && j==0){
  		 	dp[i][j] = 1;
		   }else if(matrix[i][j]=='*'){
		   	dp[i][j] = 0;
		   }else{
		   	 dp[i][j] = ((i==0)?0:dp[i-1][j])%mod;
			 dp[i][j] += ((j ==0 )?0:dp[i][j-1] );
			 dp[i][j] %= mod;
//		   	 ll v1,v2;
//		   	  v1=v2=0;
//		   	  if(i > 0){
//		   	  	  v1 = dp[i-1][j];
//				 }
//				 if(j > 0){
//				 	v2  = dp[i][j-1];
//				 }
//				 dp[i][j] = (v1 + v2)%mod;
	        }
	       // cout<<dp[i][j]<<" ";
	  }
	  //cout<<endl;
  }
  cout<<dp[n-1][n-1]<<endl;
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

