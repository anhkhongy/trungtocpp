#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n+1];
		for (int i=1;i<=n;i++){
			cin>>a[i];
		}
		int l=n,b=0;
		while(l>1){
			if(a[l-1]==a[n]){
				--l;
			}
			else {
				l=l-(n-l+1);
				++b;
			}
		}	
		cout<<b<<endl;
	}
	return 0;
}
