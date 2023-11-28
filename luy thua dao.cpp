#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
long long mod=1e9+7;
long long dao(long long n){
	string s=to_string(n);
	string tmp="";
	for (int i=s.length()-1;i>=0;i--){
		tmp+=s[i];	
	}
	return stoll(tmp);
}
long long poww(long long n,long long k){
	
	 if(k==0){
		return 1;
	}
	else {
		long long x=poww(n,k/2);
		if(k%2==0){
			return (x*x)%mod;
		}
		else{
			return ((x*x)%mod*n)%mod;
		}
	}
}
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		long long k=dao(n);
		cout<<poww(n,k)<<endl;
	}
	return 0;
}
