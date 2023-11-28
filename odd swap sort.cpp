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
		int ok,r,l;
		ok=r=l=0;
		for (int i=0;i<n;i++){
			if(a[i]%2==1){
				if(a[i]<r){
					ok=1;
				}
				else{
					r=a[i];
				}
			}
			else {
				if(a[i]<l){
					ok=1;
				}
				else {
					l=a[i];
				}
			}
		}
		if(ok==1){
			cout<<"No\n";
		}
		else cout<<"Yes\n";
	}
	return 0;
}
