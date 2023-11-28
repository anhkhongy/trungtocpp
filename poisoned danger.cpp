#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define ll long long
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int n;
		ll h;
		cin>>n>>h;
		ll a[110];
		for (int i=1;i<=n;i++){
			cin>>a[i];
		}
		ll l=0,r=h;
		while(r>l){
			ll ans=0;
			ll mid=(r+l)/2;
			for (int i=1;i<=n-1;i++){
				ans+=min(mid,a[i+1]-a[i]);
			}
			ans+=mid;
			if(ans>=h)r=mid;
			else l=mid+1;
		}
		cout<<r<<endl;
	}
	return 0;
}
