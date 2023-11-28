#include<iostream>
#define ll long long
using namespace std;
int main(){
		ll t;
		cin>>t;
		while(t--){
			ll l,r,x,a,b;
			cin>>l>>r>>x>>a>>b;
			if(a==b)cout<<0;
			else if(abs(a-b)>=x)cout<<1;
			else if(r-max(a,b)>=x||min(a,b)-l>=x)cout<<2;
			else if(max(a,b)-l>=x&&r-min(a,b)>=x)cout<<3;
			else cout<<-1;
			cout<<"\n";
		}
}
