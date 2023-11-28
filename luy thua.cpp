#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
long long mod=1e9+7;
long long poww(int n,int k){
	if(k==1){
		return n;
	}
	else {
		long long temp=poww(n,k/2);
		if(k%2==0){
			return (temp*temp)%mod;
		}
		else {
			return ((temp*temp)%mod*n)%mod;
		}
	}
}
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		cout<<poww(n,k)<<endl;
	}
	return 0;
}
