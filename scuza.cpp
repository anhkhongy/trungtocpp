#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int n,q;
		cin>>n>>q;
		long long x;
		long long k[q];
		long long b[n];
		long long c[n];
		c[0]=0;
		b[0]=0;
		for (int i=1;i<=n;i++){
			cin>>x;
			c[i]=c[i-1]+x;
			b[i]=max(x,b[i-1]);
			
		}
		for (int i=0;i<q;i++){
			cin>>k[i];
		}
		for(int i=0;i<q;i++){
			auto it=upper_bound(b+1,b+n+1,k[i]);
			cout<<c[it-b-1]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
