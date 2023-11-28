#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int check(int n){
	if(n==0||n==1)
		return 1;
	long long f0=0,f1=1;
	for (int i=3;i<=93;i++){
		long long fn=f0+f1;
		if(fn==n){
			return 1;
		}
		f0=f1;
		f1=fn;
	}
	return 0;
}
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for (int i=0;i<n;i++){
			cin>>a[i];
			if(check(a[i])==1){
				cout<<a[i]<<" ";
			}}
		cout<<endl;
	}
	return 0;
}
