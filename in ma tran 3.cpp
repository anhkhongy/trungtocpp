#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int a[n][m];
		int ans[n*m];
		for(int i=0;i<n;i++){
			for (int j=0;j<m;j++){
				cin>>a[i][j];
			}
		}
		int row=0,col=0;
		int i=0;
		bool check=true;
		while(row<n&&col<m){
			if(check){
				while(row>0&&col<m-1){
					ans[i++]=a[row][col];
					--row;
					++col;
				}
				ans[i++]=a[row][col];
				if(col==m-1)++row;
				else ++col;//duong cheo tu trai sang phai 
			}
			else {
				while(row<n-1&&col>0){
					ans[i++]=a[row][col];
					++row;
					--col;
				}
				ans[i++]=a[row][col];
				if(row==n-1)++col;
				else ++row;
			}
			check=!check;//lenh de moi lan chay chi chay if hoac else lan dau den if thi lan sau den else 
		}
		for (int i=0;i<n*m;i++){
			cout<<ans[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
