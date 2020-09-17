#include<bits/stdc++.h>
using namespace std;
#define ll long long

struct project{
	ll st,ed,pro;
};

bool comp(project x, project y){
	return x.ed < y.ed;
}

ll computeIt(vector<ll> &eds, ll val){
	auto p =lower_bound(eds.begin(),eds.end(),val);
	if(p == eds.begin()) return -1;
	--p;
	return p - eds.begin();
}

int main(){
	ll n;
	cin>>n;
	project arr[n];
	for(int i=0;i<n;++i){
		cin>>arr[i].st>>arr[i].ed>>arr[i].pro;
	}
	sort(arr,arr+n,comp);
	// now make dp state
	ll dp[n+1];
	dp[0] = 0;
	vector<ll> endpoints(n);
	for(int i=0;i<n;++i){
	     endpoints[i] = arr[i].ed;
	}
	for(ll i=1;i<=n;++i){
		ll ct = computeIt(endpoints,arr[i-1].st);
		dp[i] = max(dp[i-1] , arr[i-1].pro + dp[ct + 1]);
	}
	cout<<dp[n]<<endl;
	return 0;
}
