#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n][n];
		for (int i=0;i<n;i++){
			for (int j=0;j<n;j++){
				cin>>a[i][j];
			}
		}
		int cnt=0;
		map<int,int> mp;
		set<int> s[n];
		for (int j=0;j<n;j++){
			mp[a[0][j]]=1;
		}
		for (int i=1;i<n;i++){
			for (int j=0;j<n;j++){
				if(mp[a[i][j]]==1)
				s[i].insert(a[i][j]);
			}
		}
		for (int i=1;i<n;i++){
			for (int x:s[i]){
				mp[x]++;
			}
		}
		for (int j=0;j<n;j++){
			if(mp[a[0][j]]>=n){
			cnt++;
			mp[a[0][j]]=0;
			}
		}
		cout<<cnt<<endl;
	}
	return 0;
}
