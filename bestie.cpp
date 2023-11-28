#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int p=0,ans=3;
		int a[n+1];
		for (int i=1;i<=n;i++){
			cin>>a[i];
			p=__gcd(p,a[i]);
		}
		if(p==1)ans=0;
		for (int i=1;i<=n;i++){
			if(__gcd(p,i)==1){
				ans=min(ans,n-i+1);
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
