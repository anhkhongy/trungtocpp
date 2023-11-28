#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int m,n;
		cin>>m>>n;
		int a[101][101];
		for (int i=1;i<=m;i++){
			for (int j=1;j<=n;j++){
				cin>>a[i][j];
			}
		}
		for (int i=1;i<=n;i++){
			a[0][i]=0;
		}
		for (int i=1;i<=m;i++){
			a[i][0]=0;
		}
		for (int i=1;i<=m;i++){
			for (int j=1;j<=n;j++){
				if(i==1&&j==1){
					a[i][j]=1;
				}
				else {
				
				a[i][j]=a[i-1][j]+a[i][j-1];}			
			}
		}
		cout<<a[m][n]<<endl;
	}
	return 0;
}
