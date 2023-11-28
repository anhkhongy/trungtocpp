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
		pair<int,int> p[n];
		for (int i=0;i<n;i++){
			cin>>p[i].first>>p[i].second;
		}
		sort(p,p+n,cmp);
		int max=0;
		int cnt=0;
		for (int i=0;i<n;i++){
			if(p[i].first>=max){
				max=p[i].second;
				cnt++;
			}
		}
		cout<<cnt<<endl;	
	}
	return 0;
}
