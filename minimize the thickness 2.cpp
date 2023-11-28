#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n+1];
		for (int i=1;i<=n;i++){
			cin>>a[i];
		}
		int ti,tj;
		int ans=2001;
		long long si=0,sj=0;
		for (int i=1;i<=n;i++){
			si+=a[i];
			ti=i,tj=0;
			sj=0;
			for (int j=i+1;j<=n;j++){
				sj+=a[j];
				tj++;
				if(si==sj){
					ti=max(ti,tj);
					tj=0;
					sj=0;	
				}
			}
			if(tj==0){
				ans=min(ans,ti);
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
