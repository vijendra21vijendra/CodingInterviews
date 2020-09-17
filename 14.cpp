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

ll getBest(map<ll,ll> &cands, ll v)
{
	auto it = cands.lower_bound(v);
	if(it == cands.begin()){
		return 0;
	}
	--it;
	return it->second;
}

void insert(map<ll,ll> &cands, ll v, ll adv)
{
	if(cands[v]>=adv) return;
   cands[v] = adv;
   auto it = cands.find(v);
   it++;
   while(it!= cands.end() && it->second <= adv){
   	 auto temp = it;
   	 ++it;
   	 cands.erase(temp);
   }
}
void solve()
{
  ll n;
  cin>>n;
  ll arr[n];
  for(ll i=0;i<n;++i){
  	cin>>arr[i];
  }
  ll dp[n];
  dp[0] = 1;
  map<ll,ll> cands;
  cands[arr[0]] = 1;
  
  for(int i=1;i<n;++i){
  	
  	dp[i] = 1 + getBest(cands, arr[i]);
  	insert(cands, arr[i], dp[i]);
  	
  }
  ll maxi = 0;
  for(int i=0;i<n;++i){
  	maxi = max(maxi, dp[i]);
  }
  cout<<maxi<<endl;
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















//void solve()
//{
//  ll n;
//  cin>>n;
//  ll arr[n];
//  ll dp[n];
//  for(ll i=0;i<n;++i){
//  	cin>>arr[i];
//  	dp[i] = 1;
//  }
//  
//  ll i,j;
//  i=0;
//  while(i < n){
//  	 j = 0;
//  	 while(j < i){
//  	 	 if(arr[j] < arr[i]){
//  	 	 	  dp[i] = max(dp[i], 1 + dp[j]);
//			}
//			++j;
//	   }
//	   ++i;
//  }
//  ll maxi = dp[0];
//  for(int i=1;i<n;++i){
//  	maxi = max(maxi, dp[i]);
//  }
//  cout<<maxi<<endl;
//}

