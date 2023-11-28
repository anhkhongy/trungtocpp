#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		int a[n];
		int b[n];
		for (int i=0;i<n;i++){
			cin>>a[i];
			b[i]=a[i];
		}
		bool ok=true;
		sort (b,b+n);
		for (int i=n-x;i<x;i++){
			if(b[i]!=a[i]){
				ok=false;
			}
		}
		if(!ok){
			cout<<"NO\n";
		}
		else cout<<"YES\n";
	}
	return 0;
}
