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
		int l=0,r=n-1;
		int cnt=0;
		while(l<r){
			if(a[l]==1){
				while(a[r]==1&&l<r){
					--r;
				}
				if(l<r){
					cnt++;
					--r;		
				}
			}
			++l;
		}
		cout<<cnt<<endl;
	}
	return 0;
}
