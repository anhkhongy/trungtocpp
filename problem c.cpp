#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int a[1005][1005];
long long f1[1005][1005],f2[1005][1005];
int n,m;
int main(int argc, char** argv) {
	int n,m;
	cin>>n>>m;
	
	for (int i=1;i<=n;i++){
		for (int j=1;j<=m;j++){
			cin>>a[i][j];
			f1[i][j]=f1[i][j-1]+a[i][j];
			f2[j][i]=f2[j][i-1]+a[i][j];
		}
	}
	int q;
	cin>>q;
	while(q--){
		int tt;
		cin>>tt;
		if(tt==1){
			int x,y,z;
			cin>>x>>y>>z;
			cout<<f1[x][z]-f1[x][y-1]<<endl;
		}
		else {
			int u,v,t;
			cin>>u>>v>>t;
			cout<<f2[u][t]-f2[u][v-1]<<endl;
		}
	} 
	return 0;
}
