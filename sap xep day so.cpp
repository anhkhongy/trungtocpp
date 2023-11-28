#include <bits/stdc++.h>
using namespace std;
#define ll long long
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(){
	int t;
	cin>>t;
	while(t--){
		ll n,m,max=-1e9-2,x,ok=0;
		vector<ll> a,b;
		cin>>n>>m;
		for (int i=0;i<n;i++){
			cin>>x;
			if(x>max)max=x;
			if(x>=0)b.push_back(x);
			else a.push_back(x);
		}
		for (int i=0;i<a.size();i++){
			if(ok==0&&a[i]==max){
				cout<<m<<" "<<a[i]<<" ";
				ok=1;
			}
			else cout<<a[i]<<" ";
		}
		for (int i=0;i<b.size();i++){
			if(ok==0&&b[i]==max){
				cout<<m<<" "<<b[i]<<" ";
				ok=1;
			}
			else cout<<b[i]<<" ";
		}
		cout<<endl;
	}
}
