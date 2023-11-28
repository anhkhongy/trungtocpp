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
	int ans=INT_MIN;
	
	int k=1;
	while(k<=n){
		
		int f=0;
		while(f<=n-k){
			int cnt=0;
			for (int j=0;j<m;j++){
				bool ok=true;
				for (int i=f;i<f+k;i++){
					if(a[i][j]!=1){
						ok=false;
					}
				}
				if(ok==true)cnt++;
			}
		ans=max(ans,cnt*k);
		++f;
		}
		++k;
	}
	cout<<ans<<endl;}
	return 0;
}
