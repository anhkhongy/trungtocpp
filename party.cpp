#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int n,m;
		int x,y;
		cin>>n>>m;
		int a[n+1];
		int f[n+1];
		int mi=INT_MAX;
		for (int i=1;i<=n;i++){
			cin>>a[i];
		}
		for (int i=1;i<=m;i++){
			cin>>x>>y;
			f[x]++;f[y]++;
			mi=min(mi,a[x]+a[y]);
		}
		if(m%2==1){
			for (int i=1;i<=n;i++){
				if(f[i]%2==1){
					mi=min(a[i],mi);
				}
			}
			cout<<mi<<endl;
		}
		else cout<<"0"<<endl;
	}
	return 0;
}
