#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>> n;
		int a[n+5];
		int b[n+5];
		for (int i=1;i<=n;i++){
			cin>>a[i];
			b[i]=a[i];
		}
		sort(a+1,a+n+1);
		int l=1;
		while(l<n){
			if(a[l]==b[l]){
				++l;
			}
			else break;
		}
		int r=n;
		while(r>1){
			if(a[r]==b[r]){
				--r;
			}
			else break;
		}
		cout<<l<<" "<<r;
		cout<<endl;
	}
	return 0;
}
