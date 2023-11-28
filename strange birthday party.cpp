#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int k[300001],c[300001];
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		
		for (int i=1;i<=n;i++){
			cin>>k[i];
		}
		for (int i=1;i<=m;i++){
			cin>>c[i];
		}
		sort(k+1,k+n+1,greater<int>());
		long long sum=0;
		if(m<n){
		
		for (int i=m+1;i<=n;i++){
			c[i]=INT_MAX;
		}}
		for (int i=1;i<=n;i++){
			sum+=min(c[i],c[k[i]]);
		}
		cout<<sum<<endl;
	}
	return 0;
}
