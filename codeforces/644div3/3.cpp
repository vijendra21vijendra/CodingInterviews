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
		vector<int> odd,even;
		for(int i=0;i<n;++i){
			if(arr[i]%2==1){
				odd.push_back(arr[i]);
			}else{
				even.push_back(arr[i]);
			}
		}
		int p = odd.size(), q = even.size();
		if(p%2==0 && q%2==0){
			cout<<"YES"<<endl;
		}else{
			int i,j;
			i=j=0;
			int flag=0;
			while(i< p && j<q && !flag){
				if(abs(odd[i]-even[j])==1){
					flag=1;
				}else{
					if(odd[i]>even[j]){
						++j;
					}else{ 
						++i;
					}
				}
			}
			if(flag==1){
				cout<<"YES"<<endl;
			}else{
					cout<<"NO"<<endl;
			}	
		}	
	}
return 0;
}
/*
11 14 16 12
11 12 14 16
11
12 14 16

*/

