#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;cin>>n;
	int a[n][n],cmp[n][n];
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	int m;
	cin>>m;
	int b[m][m];
	for (int i=0;i<m;i++){
		for (int j=0;j<m;j++){
			cin>>b[i][j];
		}
	}
	int c=0,h=0;
	while(c<=n&&h<=n){
		for (int i=h;i<h+m;i++){
			for (int j=c;j<c+m;j++){
				cmp[i][j]=a[i][j]*b[i-h][j-c];
			}
		}
		c+=m;
		if(c==n){
			h+=m;
			c=0;
		}
	}
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			cout<<cmp[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
