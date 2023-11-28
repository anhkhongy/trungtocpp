#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n+1];
		long long f[n+1];
		for (int i=1;i<=n;i++){
			cin>>a[i];
		}
		f[1]=a[1];
		f[0]=0;
		for (int i=2;i<=n;i++){
			f[i]=max(f[i-1],f[i-2]+a[i]);
		}
		cout<<f[n]<<endl;
	}
	return 0;
}
