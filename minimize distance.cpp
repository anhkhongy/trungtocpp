#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n];
		for (int i=0;i<n;i++){
			cin>>a[i];
		} 
		sort(a,a+n);
		long long ans=0;
		for (int i=n-1;i>=0&&a[i]>0;i-=k){
			ans+=a[i];
		}
		for (int i=0;i<=n-1&&a[i]<0;i+=k){
			ans-=a[i];
		}
		ans=2*ans-max(abs(a[0]),a[n-1]);
		cout<<ans<<endl;
	}
	return 0;
}
