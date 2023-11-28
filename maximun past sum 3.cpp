#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int n,a[105][105];
int f[105][105];
int main(int argc, char** argv) {
	cin>>n;
	for (int i=1;i<=n;i++){
		for (int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	for (int i=1;i<=n;i++){
			f[i][1]=a[i][1];
			f[0][i]=f[n+1][i]=INT_MIN;
	}
	for (int c=2;c<=n;c++){
		for (int h=1;h<=n;h++){
			f[h][c]=max({f[h+1][c-1],f[h-1][c-1],f[h][c-1]})+a[h][c];
		}
	}
	int ans=INT_MIN;
	for(int i=1;i<=n;i++){
		ans=max(ans,f[i][n]);
	}
	cout<<ans<<endl;
	return 0;
}
