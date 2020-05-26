#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long test;
	cin>>test;
	while(test--){
		long long n,k;
		cin>>n>>k;
		if(n<=k){
			cout<<1<<endl;
		}else if (k==1){
			cout<<n<<endl;
		}else{
			long long ans,i;
			i=1;
			ans = n;
			while(i * i<= n)
			{
				if(i<=k && n%i==0){
					ans = min(ans, n/i);	
				}
				if(n%i==0){
					if(n/i <= k){
						ans = min(ans, n/(n/i));
					}
				}
//				if(n/i<=k && (n/(n/i))==0)
//				
//				if(n%(k/i)==0){
//					ans  = min(ans , n/(k/i));
//				}
				++i;
			}
			cout<<ans<<endl;
		}
	}
return 0;
}
/*
8 7
=4
=2
ans1  = 9
ans2 = 1


8 1
10 6

*/

