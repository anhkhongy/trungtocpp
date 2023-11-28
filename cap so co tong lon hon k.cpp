#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n,k;
	cin>>n>>k;
	int a[n];
	for (int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	int cnt=0;
	for (int i=0;i<n;i++){
		auto it=upper_bound(a+i+1,a+n,k-a[i]);
		if(it==a+n){
			cnt+=0;
		}
		else {
			cnt+=n-(it-&a[0]);
		}
	}
	cout<<cnt;
	return 0;
}
