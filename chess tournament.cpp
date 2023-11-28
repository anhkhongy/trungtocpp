#include<bits/stdc++.h>
using namespace std;
string ans[50];
int main()
{
	int t;cin>>t;
	while(t--){
		int n;
		string s;cin>>n>>s;
		vector<int>id;
		for(int i=0;i<n;i++){
			ans[i]=string(n,'=');
			ans[i][i]='X';
			if(s[i]=='2')id.push_back(i);
		}
		if(id.size()==1||id.size()==2){
			cout<<"NO\n";
			continue;
		}
		cout<<"YES\n";
		for(int i=0;i<id.size();i++){
			int u=id[i],v=id[(i+1)%id.size()];
			ans[u][v]='+';
			ans[v][u]='-';
		}
		for(int i=0;i<n;i++)cout<<ans[i]<<'\n';
	}
}
