#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int a[1001];
int tk(int n){
	int l=0,r=n-1;
	while(l<=r){
		int m=(l+r)/2;
		if(a[m]==0){
			l=m+1;
		}
		else r=m-1;
	}
	return l;
}
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		for (int i=0;i<n;i++){
			cin>>a[i];
		}
		cout<<tk(n)<<endl;
	}
	return 0;
}
