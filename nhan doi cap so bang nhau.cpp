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
		for (int i=0;i<=n-2;i++){
			if(a[i]!=0&&a[i]==a[i+1]){
				a[i]*=2;
				a[i+1]=0;
			}
		}
		for (int i=0;i<n;i++){
			if(a[i]!=0){
				cout<<a[i]<<" ";
			}
		}
		for (int i=0;i<n;i++){
			if(a[i]==0){
				cout<<a[i]<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}
