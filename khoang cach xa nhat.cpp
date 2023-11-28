#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
bool cmp(pair<int,int> a,pair<int,int> b){
	if(a.first==b.first){
		return a.second>b.second;
	}
	return a.first<b.first;
}
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		pair<int,int> p[n];
		for (int i=0;i<n;i++){
			cin>>p[i].first;
			p[i].second=i;
		}
		sort(p,p+n,cmp);
		int ans=-1,mi=p[0].first,k=p[0].second;
		for (int i=0;i<n;i++){
			if(p[i].second>k){
				ans=max(ans,p[i].second-k);
			}
			if(p[i].second<k){
				mi=p[i].first;
				k=p[i].second;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
