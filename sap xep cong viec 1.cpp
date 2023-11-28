#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
bool cmp(pair<int,int> a,pair<int,int> b){
	if(a.second!=b.second){
		return a.second<b.second;
	}
	return a.first<b.first;
}
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int f[n],s[n];
		for (int i=0;i<n;i++){
			cin>>f[i];
		}
		for (int i=0;i<n;i++){
			cin>>s[i];
		}
		pair<int,int> p[n];
		for (int i=0;i<n;i++){
			p[i].first=f[i];
			p[i].second=s[i];
		}
		sort(p,p+n,cmp);
		int cnt=0;
		int a=0;
		for (int i=0;i<n;i++){
			if(p[i].first>=a){
				a=p[i].second;
				cnt++;
			}
		}
		cout<<cnt<<endl;
	}
	return 0;
}
