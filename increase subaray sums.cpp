#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
long long x,f[5010],g[5010];
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
	int n,x;
	cin>>n>>x;
	int a[n+1];
	for (int i=1;i<=n;i++){
		cin>>f[i];
		f[i]+=f[i-1];
		g[i]=min(g[i-1],f[i]);
	}
	long long res=0;
	for (int i=0;i<=n;i++){
		for (int j=i;j<=n;j++){
			res=max(res,f[j]-g[j-i]+i*x);
		}
		cout<<res<<" ";
	}
	cout<<endl;
	}
	return 0;
}
