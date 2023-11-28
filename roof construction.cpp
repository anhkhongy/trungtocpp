#include <bits/stdc++.h>
using namespace std;
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n+1];
		map<int,int> mp;
		int ans=-1;
		for (int i=1;i<=n;i++){
			cin>>a[i];
			if(mp[a[i]]>0){
				ans=max(ans,mp[a[i]]-1+n-i+1);
				mp[a[i]]=i;
			}
			else {
				mp[a[i]]=i;
			}
		}
		cout<<ans<<endl;
	}
}
