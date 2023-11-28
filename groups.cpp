#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n][5];
		for (int i=0;i<n;i++){
			for (int j=0;j<5;j++){
				cin>>a[i][j];
			}
		}
		int ans=0;
		for (int i=0;i<5;i++){
			for (int j=i+1;j<5;j++){
				int x=0,y=0,z=0;
				for (int k=0;k<n;k++){
					x+=a[k][i];
					y+=a[k][j];
					if(a[k][i]==0&&a[k][j]==0){
						z++;
					}
				}
				if(x>=n/2&&y>=n/2&&z==0){
					ans++;
				}
			}
		}
		if(ans>0){
			cout<<"YES\n";
		}
		else {
			cout<<"NO\n";
		}
	}
	return 0;
}
