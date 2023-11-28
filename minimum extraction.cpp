#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for (int i=0;i<n;i++){
			cin>>a[i];
		}
		if(n==1){
			cout<<a[0]<<endl;
		}
		else {
			sort(a,a+n);
			int ans=a[0];
			for (int i=0;i<n-1;i++){
				ans=max(ans,a[i+1]-a[i]);
			}
			cout<<ans<<endl;
		}
	}
	return 0;
}
