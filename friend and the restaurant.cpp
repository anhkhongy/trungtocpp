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
		int b[n];
		int c[n];
		for (int i=0;i<n;i++){
			cin>>a[i];
		}
		for (int i=0;i<n;i++){
			cin>>b[i];
			c[i]=b[i]-a[i];
		}
		sort(c,c+n);
		int l=0,r=n-1;
		int cnt=0;
		while(l<r){
			if(c[l]+c[r]>=0){
				cnt++;
				++l;
				--r;
			}
			else ++l;
		}
		cout<<cnt<<endl;
	}
	return 0;
}
