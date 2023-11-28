#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		map<int,int> mp;
		int a[n];
		for (int i=0;i<n;i++){
			cin>>a[i];
		}
		mp[a[0]]=1;
		for (int i=1;i<n;i++){
			if(a[i]!=a[i-1]){
				mp[a[i]]++;
			}
		}
		mp[a[0]]--;
		mp[a[n-1]]--;
		int ans=INT_MAX;
		for (int i=0;i<n;i++){
		
			ans=min(ans,mp[a[i]]);
		}
		cout<<ans+1<<endl;
	}
	return 0;
}
