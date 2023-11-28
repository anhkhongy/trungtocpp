#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	pair<int,int> p[100001];
	while(t--){
		int n,k;
		cin>>n>>k;
		for (int i=0;i<n;i++){
			cin>>p[i].first;
			p[i].second=i;
		}
		sort(p,p+n);
		for (int i=1;i<n;i++){
			if(p[i-1].second+1!=p[i].second)--k;
		}
		if(k>0){
			cout<<"YES\n";
		}
		else cout <<"NO\n";
	}
	return 0;
}
