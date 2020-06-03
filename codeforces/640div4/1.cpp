#include<bits/stdc++.h>
using namespace std;

int main()
{
 int test;
 cin>>test;
 while(test--){
 	int n;
 	cin>>n;
 	int val = 1;
 	int arr[4];
 	int i=0;
 	while(n>0){
 		if(n%10!=0){
 			arr[i] = val * (n%10);
 			++i;
		 }
 		val = val*10;
 		n = n/10;
	 }
	 int k = i;
	 cout<<k<<endl;
	 for(i=0;i<k;++i){
	 	cout<<arr[i]<<" ";
	 }
	 cout<<endl;
 }

return 0;
}

