#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
map<int,int> mp;
bool cmp(int a,int b){
	if(mp[a]!=mp[b]){
		return mp[a]>mp[b];
	}
	return a<b;
}

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int n;cin>>n;
		int a[n];
		for (int i=0;i<n;i++){
			cin>>a[i];
			mp[a[i]]++;
		}
		sort(a,a+n,cmp);
		for(int i=0;i<n;i++){
			cout<<a[i]<<' ';
		}
		cout<<endl;
		mp.clear();
	}
	return 0;
}