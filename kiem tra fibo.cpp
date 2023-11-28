#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
	
	long long n,fn=1;
	cin>>n;
	if(n==0||n==1) {
	cout<<"YES"<<endl;
	continue;}
	long long f0=0,f1=1;
	while(fn<n){
		fn=f0+f1;
		f0=f1;
		f1=fn;
	}
	if(fn==n){
		cout<<"YES"<<endl;
	}
	else {
		cout<<"NO"<<endl;
	}
}
	return 0;
}
