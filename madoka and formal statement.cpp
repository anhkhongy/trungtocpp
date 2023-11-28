#include<bits/stdc++.h>
using namespace std;
#define int long long
 
void solve(){
	int n;
	cin>>n;
	int a[n+1],b[n+1];
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++)cin>>b[i];
	for(int i=1;i<=n;i++){
		if(a[i]>b[i] || (a[i]!=b[i] && b[i]>b[i%n+1]+1)){
			cout<<"NO"<<endl;
			return;
		}
	}
	cout<<"YES"<<endl;
}
 
signed main(){
	int t=1;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}

