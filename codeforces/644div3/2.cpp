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
		for(int i=0;i<n;++i){
			cin>>arr[i];
		}
		sort(arr,arr+n);
		int mini=0;
		mini = arr[1]-arr[0];
		for(int i=2;i<n;++i){
			mini = min(mini, arr[i]-arr[i-1]);
		}
		cout<<mini<<endl;
	}


return 0;
}

