#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

long long lcm(long long a,long long b){
	return a*b/__gcd(a,b);
}
long long lcms(long long  a,long long  b,long long c,long long n){
	long long m=lcm(lcm(a,b),c);
	long long tmp=pow(10,n-1);
	long long res=(tmp+m-1)/m*m;
	if(res<pow(10,n)){
		return res;
	}
	return -1;
}
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		long long  x,y,z,n;cin>>x>>y>>z>>n;
		cout<<lcms(x,y,z,n)<<endl;
	}
	return 0;
}
