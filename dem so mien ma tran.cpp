#include <bits/stdc++.h>
using namespace std;
int n,m,a[505][505];
pair<int,int> path[]={{-1, -1}, {-1, 0}, {-1, 1}, {0, -1}, {0, 1}, {1, -1}, {1, 0}, {1, 1}};
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void DFS(int i,int j){
	a[i][j]=0;
	for (int k=0;k<8;k++){
		int inew=i+path[k].first;
		int jnew=j+path[k].second;
		if(inew>=0&&inew<n&&jnew>=0&&jnew<m&&a[inew][jnew]==1){
			DFS(inew,jnew);
		}
	}
}
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		cin>>n>>m;
		for (int i=0;i<n;i++){
			for (int j=0;j<m;j++){
				cin>>a[i][j];
			}
		}
		int cnt=0;
		for (int i=0;i<n;i++){
			for (int j=0;j<n;j++){
				if(a[i][j]==1){
					cnt++;
					DFS(i,j);
				}
			}
		}
		cout<<cnt<<endl;
	}
	return 0;
}
