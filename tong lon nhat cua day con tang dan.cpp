#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int f[n+1]={};
		int a[n+1];
		for (int i=1;i<=n;i++){
			cin>>a[i];
		}
		f[1]=a[1];
		int ans=f[1];
		for (int i=2;i<n;i++){
			int ma=-1;
			for (int j=1;j<=i;j++){
				if(a[j]<a[i]){
					ma=	max(ma,f[j]+a[i]);
				}
			}
			f[i]=max(ma,a[i]);
			ans=max(ans,f[i]);
		}
		cout<<ans<<endl;
	}
	return 0;
}
