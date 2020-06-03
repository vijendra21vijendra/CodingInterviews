#include<bits/stdc++.h>
using namespace std;

int main()
{
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		int arr[n];
		bool sums[n+1];
		for(int i=0;i<=n;++i){
			sums[i]= false;
		}
		for(int i=0;i<n;++i){
			cin>>arr[i];
		}
		for(int i=0;i<n;++i){
			int sum =arr[i];
			for(int j=i+1;j<n;++j){
				sum += arr[j];
				if(sum<=n){
				 	sums[sum] = true;	
				}else{
					break;
				}
			}
		}
		int cnt=0;
		for(int i=0;i<n;++i){
			if(sums[arr[i]]){
				cnt+=1;
			}
		}
		cout<<cnt<<endl;
	}
return 0;
}

