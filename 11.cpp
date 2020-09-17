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
  int n;
  cin>>n;
  int arr[n];
  int sum=0;
  for(int i=0;i<n;++i){
  	cin>>arr[i];
  	sum += arr[i];
  }
  // now sum these
  int dp[sum+1];
  for(int i=0;i<=sum;++i){
  	dp[i]=0;
  }
  dp[0]=1;
  for(int i=0;i<n;++i){
  	 for(int j=sum-arr[i];j>=0;--j){
  	 	  if(dp[j]==1){
  	 	  	  dp[j + arr[i]]=1;
			 }
	   }
  }
  int cnt=0;
  for(int i=1;i<=sum;++i){
  	if(dp[i]==1){
  		++cnt;
	  }
  }
  cout<<cnt<<endl;
  for(int i=1;i<=sum;++i){
  	if(dp[i]==1){
  		cout<<i<<" ";
	  }
  }
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

