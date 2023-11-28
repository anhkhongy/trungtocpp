#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[200001];
		int mx=0,mn=0;
		for (int i=0;i<n;i++){
			cin>>a[i];
			if(a[i]==1){
				mx=1;
			}
		}
		sort(a,a+n);
		for (int i=1;i<n;i++){
			if(a[i]==a[i-1]+1){
				mn=1;
			}
		}
		if(mx&&mn){
			cout<<"No\n";
		}
		else cout<<"Yes\n";
	}
	return 0;
}
