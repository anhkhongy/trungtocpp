#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		long long a[n],b[m];
		for (int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		for (int i=0;i<m;i++){
			cin>>b[i];
		}
		sort(b,b+m);
		cout<<a[n-1]*b[0]<<endl;
	}
	return 0;
}
