#include<bits/stdc++.h>
using namespace std;

int main()
{
	int test;
	cin>>test;
	while(test--){
		int n,k;
		cin>>n>>k;
		if(n<k || (n%2==1 && k%2==0)){
			cout<<"NO"<<endl;
			continue;
		}else{
			// first case
			// let k-1 are 1's then
			if((n-k+1)%2==1){
				cout<<"YES"<<endl;
				for(int i=1;i<=k-1;++i){
					cout<<"1"<<" ";
				}
				cout<<(n-k+1)<<endl;
			}else if((n-(k-1)*2 >0) && (n-(k-1)*2)%2==0){
			  	// k-1 2s 
			  	// 
			  	cout<<"YES"<<endl;
			  	for(int i=1;i<=k-1;++i){
					cout<<"2"<<" ";
				}
				cout<<(n-(k-1)*2)<<endl;
			}else{
				cout<<"NO"<<endl;
			}
		}
	}


return 0;
}

