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
		for (int i=0;i<n;i++){
			for (int j=0;j<m;j++){
				cin>>a[i][j];
			}
		}
		int ans=0;
		for (int i=0;i<n;i++){
			for (int j=0;j<m;j++){
				int now=-a[i][j];
				for (int k=0;k<n;k++){
					int d=abs(i-k);
					if(j>=d)now+=a[k][j-d];
					if(j+d<m)now+=a[k][j+d];
				}
				ans=max(ans,now);
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
