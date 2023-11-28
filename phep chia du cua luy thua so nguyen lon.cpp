#include <bits/stdc++.h>
using namespace std;
#define ll long long
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//a^b%m=(a%m)^b%m
ll m;
ll POW(ll a,ll b){
	ll res=1;
	while(b){
	
		if(b%2==1){
			res*=a;
			res%=m;
		}
		a*=a;
		a%=m;
		b/=2;
	}
	return res;
}
ll comp(string &s){
	ll res=0;
	for (int i=0;i<s.length();i++){
		res=res*10+s[i]-'0';
		res%=m;
	}
	return res;
}
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		ll b;
		cin>>b>>m;
		ll du=comp(s);
		cout<<POW(du,b)<<endl;
	}
	return 0;
}
