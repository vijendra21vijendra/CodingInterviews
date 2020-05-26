#include<bits/stdc++.h>

using namespace std;

int main()
{
	int test;
	cin>>test;
//	cout<<test<<endl;
	while(test--){
		int n;
		cin>>n;
	//	cout<<n<<endl;
		char matrix[n][n];
		string s;
		for(int i=0;i<n;++i){
//			cin>>s;
			for(int j=0;j<n;++j){
//				char ch;
//				cin>>ch;
//				matrix[i][j] = ch;
				cin>>matrix[i][j];
			}
		}
	//	cout<<"done"<<endl;
		bool flag=true;
		for(int i=0;i<n-1 && flag;++i){
			for(int j=0;j<n-1 && flag;++j){
				if(matrix[i][j]=='1'){
					if(matrix[i+1][j]=='0' && matrix[i][j+1]=='0'){
						flag=false;
					}
				}
			}
		}
		flag==true?cout<<"YES"<<endl:cout<<"NO"<<endl;
	}
return 0;
}

