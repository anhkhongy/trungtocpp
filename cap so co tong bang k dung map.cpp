#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int a[1000001];
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n];
		map<int,int> mp;
		for (int i=0;i<n;i++){
			cin>>a[i];
			mp[a[i]]++;
			
		}
		int ans=0;
		for (int i=0;i<n;i++){
			ans+=mp[k-a[i]];
			if(k=2*a[i]);
			--ans;
		}
		cout<<ans/2<<endl;
	}
	return 0;
}
