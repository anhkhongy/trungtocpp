#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int k,n;
	cin>>k>>n;
	int v[k+1][n+1],t[k+1][n+1];
	for (int i=1;i<=k;i++){
		for (int j=1;j<=n;j++){
			cin>>v[i][j];
		}
	}
	for (int i=0;i<=n;i++){
		t[0][i]=0;
		
	}
	for (int i=1;i<=k;i++){
		t[i][0]=0;
	}
	for (int i=1;i<=k;i++){
		for (int j=i;j<=n-k+i;j++){
			t[i][j]=max(t[i][j-1],t[i-1][j-1]+v[i][j]);
		}
	}
	cout<<t[k][n];
	return 0;
}
