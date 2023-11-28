#include <bits/stdc++.h>
using namespace std;
#define ll long long
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll a[n];
		set<ll> se;
		bool check=false;
		for (ll i=0;i<n;i++){
			cin>>a[i];
			se.insert(a[i]);
		}
		for (int i=0;i<n-1;i++){
			for (int j=i+1;j<n;j++){
				ll tmp=sqrt(a[i]*a[i]+a[j]*a[j]);
				ll ok=a[i]*a[i]+a[j]*a[j];
				if(tmp*tmp==ok){
					if(se.find(tmp)!=se.end()){
						check=true;
					}
				}
			}
		}
		if(check){
			cout<<"YES"<<endl;
		}
		else cout<<"NO"<<endl;
	}
	return 0;
}
