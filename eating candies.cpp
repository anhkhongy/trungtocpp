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
		long long tt=a[0],tp=a[n-1];
		int l=0,r=n-1;
		
		int ans=0;
		while(l<r){
			
			if(tt<tp){
				++l;
				tt+=a[l];
			}	
			else if(tp<tt){
				--r;
				tp+=a[r];
			}
			else {
				ans=max(ans,l+1+n-r);
				++l;
				--r;
				tp+=a[r];
				tt+=a[l];
			}
			
		}
		
		cout<<ans<<endl;
	}
	return 0;
}
