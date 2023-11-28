#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
bool cmp(pair<int,int> a,pair<int,int> b){
	return a.second<b.second;
}
int main(int argc, char** argv) {
	int n;
	vector<int,int> v(n);
	for (int i=0;i<n;i++){
		cin>>v[i].first>>v[i].second();
	}
	sort(v.begin(),v.end(),cmp);
	int ans=1;
	int tmp=v[0].second;
	for (int i=1;i<n;i++){
		if (v[i].first>tmp){
			ans++;
			tmp=v[i].second;
		}
	}
	cout<<ans;
	return 0;
}
