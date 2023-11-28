#include<bits/stdc++.h>
#define mxn 100002
using namespace std;
int n,k,T;
int main(){
	cin>>T;
	while(T--){
		cin>>n>>k;
		int j=1,i=n;
		while(i%2==0) i/=2,j*=2;
		if(i==1) j/=2;
		cout<<j<<' '<<(n-j)/2<<' '<<(n-j)/2<<'\n';
	}
}
