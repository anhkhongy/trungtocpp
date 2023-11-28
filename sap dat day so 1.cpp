#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define ll long long
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll a[n];
		set<ll> se;
		for (ll i=0;i<n;i++){
			cin>>a[i];
			se.insert(a[i]);
		}
		for (ll i=0;i<n;i++){
			if(se.find(i)==se.end()){
				cout<<"-1"<<" ";
			}
			else cout<<i<<" ";
		}
		cout<<endl;
	}
	return 0;
}
