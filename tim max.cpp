#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long a[n],mod=1e9+7;
		for (int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		long long s=0;
		for (int i=0;i<n;i++){
			s=(s+a[i]*i)%mod;
		}
		cout<<s<<endl;
	}
	return 0;
}
