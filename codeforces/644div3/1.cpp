#include<bits/stdc++.h>
using namespace std;

int main()
{
	int test;
	cin>>test;
	while(test--){
		int n,m;
		cin>>n>>m;
		int x = 2 * min(n,m);
		int y = max(n,m);
		cout<<max(x,y)*max(x,y)<<endl;
	}


return 0;
}

