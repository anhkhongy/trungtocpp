#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define ll long long
int main(int argc, char** argv) {
	ll n,k;
	cin>>n;
	ll a[n+1];
	ll ans=1e19;
	for (ll i=1;i<=n;i++){
		cin>>a[i];
	}
	for (ll i=1;i<=n;i++){
		ll s=0,l=0;
		for (ll j=i-1;j>=1;j--){
			k=l/a[j]+1;
			s+=k;
			l=k*a[j];
		}
		l=0;
		for (ll j=i+1;j<=n;j++){
			k=l/a[j]+1;
			s+=k;
			l=k*a[j];
		}
		ans=min(ans,s);
	}
	cout<<ans;
	return 0;
}
