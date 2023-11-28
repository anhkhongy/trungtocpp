#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#define ll long long
ll a[2];
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		a[0]=a[1]=0;
		int n;
		cin>>n;
		ll b[n+1];
		for (int i=1;i<=n;i++){
			cin>>b[i];
			a[i%2]=__gcd(a[i%2],b[i]);
		}
		bool ok=true;
		for (int i=1;i<=n;i+=2){
			if(b[i]%a[0]==0){
				ok=false;
			}
		}
		if(ok){
			cout<<a[0]<<endl;
			continue;
		}
		ok=true;
		for (int i=2;i<=n;i+=2){
			if(b[i]%a[1]==0){
				ok=false;
			}
		}
		if(ok){
			cout<<a[1]<<endl;
			continue;
		}
		if(!ok){
			cout<<'0'<<endl;
		}
	}
	return 0;
}
