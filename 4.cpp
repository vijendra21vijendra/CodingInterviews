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
int dp[101][1000001];

//ll doSolve(ll *arr, ll ith, ll val){
////	cout<<ith<<" -- "<<val<<endl;
//	if(val <0 || ith < 0) return 0;
//	if(val == 0) return 1;
//	if(dp[val][ith] >=0)
//	{
//	return dp[val][ith];	
//	} 
//	ll temp  =0;
//	if(val >= arr[ith]){
//		temp = doSolve(arr,ith,val-arr[ith]) + doSolve(arr,ith-1,val);
//	}else{
//		temp = doSolve(arr, ith-1, val);
//	}
//	temp = temp%mod;
//	dp[val][ith] = temp;
//	return temp;
//}


void solve()
{
  ll n,x;
  cin>>n>>x;
  int arr[n];
  for(ll i=0;i<n;++i)
  {
     cin>>arr[i];	
  }
  //ll dp[n][x+1];
  //vector<vector<ll>> dp(n,vector<ll>(x+1));
  for(ll i=0;i<n;++i){
  	for(ll j=0;j<=x;++j){
  		if(j==0){
  			dp[i][j] = 1;
		  }else{
		    dp[i][j] = (( (i>0)?dp[i-1][j]:0 )+ ((j - arr[i] >=0)?dp[i][j-arr[i]]:0))%mod;	
		  }
		  
	  }
	 
  }
  cout<<dp[n-1][x]<<endl;
}

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	ll test=1;
	//cin>>test;
	while(test--)
	{
		solve();
	}
	return 0;
}

