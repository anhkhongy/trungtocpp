#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	 int t,n,m; int a[100][100]; cin >> t; while(t--){ cin >> n >> m; int row[100]={0}; int col[100]={0}; for(int i=0;i<n;i++) for(int j=0;j<m;j++){ cin >> a[i][j]; if(a[i][j]==1){ row[i]=1; col[j]=1; } } for(int i=0;i<n;i++){ for(int j=0;j<m;j++){ if(row[i]||col[j]) cout << "1 "; else cout << "0 "; } cout << endl; } } }

