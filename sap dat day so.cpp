#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int n,m;cin>>n>>m;
		int a1[n],a2[m];
		map<int,int> mp;
		for (int &x:a1){
			cin>>x;
			mp[x]++;
		}
		for (int &x:a2){
			cin>>x;
			if(mp.count(x)!=0){
				for (int i=1;i<=mp[x];i++){
					cout<<x<<" ";
				}
				mp[x]=0;
			}
			else continue;
		}
		for (auto it:mp){
			if(it.second!=0){
				for(int i=1;i<=it.second;i++){
				
				cout<<it.first<<" ";}
			}
		}
		cout<<endl;
	}
	return 0;
}
