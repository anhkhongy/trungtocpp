#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		long a[n+1];
		for (int i=1;i<=n;i++){
			cin>>a[i];
		}
		int cnt=0;
		int l=1,r=2;
		while(l<=n-k&&r<=n){
			if(a[r]*2>a[r-1]){
				if(r-l<k){
					++r;
				}
				else {
					cnt++;
					++l;
					++r;
				}
			}
			else{
				l=r;
				++r;
			}
		}
		cout<<cnt<<endl;
	}
	return 0;
}
