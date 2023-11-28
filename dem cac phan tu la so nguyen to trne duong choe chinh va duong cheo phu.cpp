#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using ll=long long ;
bool nt(ll n){
	for (int i=2;i<=sqrt(n);i++){
		if(n%i==0)return false;
	}
	return n>1;
}
int main(int argc, char** argv) {
	int n;
	cin>>n;
	ll a[n][n];
	set<ll> se;
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			cin>>a[i][j];
			
		}
	}
	for (int i=0;i<n;i++){
		if(nt(a[i][i])==true)se.insert(a[i][i]);
		if(nt(a[i][n-i-1])==true)se.insert(a[i][n-i-1]);
	}
	cout<<se.size();
	return 0;
}
