#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define ll long long 
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int n1,n2,n3;
		cin>>n1>>n2>>n3;
		ll a[n1],b[n2],c[n3];
		multiset<ll> ms;
		for (int i=0;i<n1;i++){
			cin>>a[i];	
		}
		for (int i=0;i<n2;i++){
			cin>>b[i];	
		}
		for (int i=0;i<n3;i++){
			cin>>c[i];
		}
		int i1=0,i2=0,i3=0;
		while(i1<n1&&i2<n2&&i3<n3){
			if(a[i1]==b[i2]&&b[i2]==c[i3]){
				ms.insert(a[i1]);
				++i1;
				++i2;
				++i3;
			}
			else if(a[i1]<b[i2]){
				++i1;
			}
			else if(b[i2]<c[i3]){
				++i2;
			}
			else ++i3;
		}
		if(ms.empty())cout<<"-1";
		else{
			for (ll x:ms){
				cout<<x<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}
