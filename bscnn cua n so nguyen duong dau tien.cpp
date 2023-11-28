#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
long long lcm(long long a,long long b){
	int gcd=__gcd(a,b);
	return a*b/gcd;
}
long long lcmn(int n){
	long long a=1;
	for(int i=2;i<=n;i++){
		a=lcm(a,i);
	}
	return a;
}
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int n;cin>>n;
		cout<<lcmn(n)<<endl;
	}
	return 0;
}
