#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n];
		for (int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		long long count =0;
		for (int i=0;i<n-1;i++){
			auto it=lower_bound(a,a+n,a[i]+k);
			count+=it-(a+i)-1;
		}
		cout<<count<<endl;
	}
	return 0;
}
