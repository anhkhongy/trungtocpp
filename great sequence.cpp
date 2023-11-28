#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define ll long long
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		ll n,x;
		cin>>n>>x;
		ll a[n];
		map<ll,ll>mp;
		for (ll i=0;i<n;i++){
			cin>>a[i];
			mp[a[i]]++;
		}
		int ans=0;
		sort(a,a+n);
		for (int i=0;i<n;i++){
			if(mp[a[i]]>0){
				if(mp[x*a[i]]==0){
					ans++;
				}
				else {
					mp[x*a[i]]--;
				}
				mp[a[i]]--;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
