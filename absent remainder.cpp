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
		sort(a,a+n);
		int k=n/2;
		int r=n-1;
		while(k--){
			cout<<a[r--]<<' '<<a[0]<<endl;
		}
		
	}
	return 0;
}
