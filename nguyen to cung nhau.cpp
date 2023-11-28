#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
bool snt(int n){
	if(n==0||n==1)return false;
	else{
	
	for (int i=2;i<=sqrt(n);i++){
		if(n%i==0)return false;
	}}
	return true;
}
int gcd(int a,int b){
	while(b!=a){
		if(b>a)b-=a;
		else a-=b;
	}
	return a;
}
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int n;cin>>n;
		int cnt=0;
		for (int i=1;i<n;i++){
			if(gcd(i,n)==1)cnt++;
		}
		if(snt(cnt))cout<<"1"<<endl;
		else cout<<"0"<<endl;
	}
	return 0;
}
