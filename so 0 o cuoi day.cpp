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
		for (ll i=0;i<n;i++){
			cin>>a[i];
		}
		ll cnt=0;
		for (ll i=0;i<n;i++){
			if(a[i]!=0){
				cout<<a[i]<<" ";
			}
			else cnt++;
		}
		for (int i=1;i<=cnt;i++){
			cout<<"0"<<" ";
		}
		cout<<endl;
	}
	return 0;
}
