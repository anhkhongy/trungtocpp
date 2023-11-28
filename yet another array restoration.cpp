#include<bits/stdc++.h>
using namespace std;
int main(){
	int T; cin>>T;
	while(T--){
		int x,n,l,r,k;
		cin>>n>>l>>r;
		x=n-1;
		while((r-l)%x!=0) x--;
		k=(r-l)/x;
		while(x<n-1 && l-k>0) x++,l-=k;
		for(int i=0; i<=n-1; i++) cout<<l+k*i<<" ";
		cout<<endl;
	}
	return 0;
}
