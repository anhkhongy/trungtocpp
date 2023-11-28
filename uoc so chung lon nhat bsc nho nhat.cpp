#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
long gcd(long a,long b){
	while(b!=a){
		if(b>a)b-=a;
		else a-=b;
	}
	return a;
}
long lcm(long a,long b){
	return a*b/gcd(a,b);
}
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		long  a,b;
		cin>>a>>b;
		cout<<lcm(a,b)<<' '<<gcd(a,b);
		cout<<endl;
	}
	return 0;
}
