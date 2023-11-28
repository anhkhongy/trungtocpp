#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define  ll long long
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		ll hc,dc;
		cin>>hc>>dc;
		ll hm,dm;
		cin>>hm>>dm;
		ll k,w,a;
		cin>>k>>w>>a;
		bool ok=false;
		for (int i=0;i<=k;i++){
			ll d=dc+i*w;
			ll h=hc+(k-i)*a;
			ll f1=(h-1)/dm;
			ll f2=(hm-1)/d;
			if(f1-f2>=0){
				ok=true;
			}
		}
		if(!ok){
			cout<<"NO\n";
		}
		else cout<<"YES\n";
	}
	return 0;
}
