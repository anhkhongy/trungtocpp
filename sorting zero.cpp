#include <bits/stdc++.h>
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
		for (int i=1;i<=n;i++){
			cin>>a[i];
			mp[i]=i;
		}
		int ans=0;
		for (int i=1,l=1;i<=n;i++){
			if(mp[a[i]]<mp[a[i-1]]){
				while(l<i){
					if(mp[a[l]]>0){
						ans++;
						mp[a[l]]=0;
					}
					++l;
				}
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
