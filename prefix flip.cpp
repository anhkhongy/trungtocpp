#include <bits/stdc++.h>
 
using namespace std;
string a,b;int n,t,ans;
int main()
{
	cin>>t;
	while(t--){
		cin>>n>>a>>b;
		ans=0;
		for(int i=0;i<n;i++)if(a[i]!=b[i]) ans++;
		cout<<3*ans<<" ";
		for(int i=0;i<n;i++) if(a[i]!=b[i]) cout<<i+1<<" 1 "<<i+1<<" ";
		puts("");
	}
}
