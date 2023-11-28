#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int n;cin>>n;
		int d[n+1];
		for (int i=1;i<=n;i++){
			cin>>d[i];
		}
		int a[n+1];
		a[1]=d[1];
		bool ok=true;
		for (int i=2;i<=n;i++){
			if(d[i]==0){
				a[i]=a[i-1];
			}
			else {
				if(a[i-1]+d[i]>=0&&a[i-1]-d[i]<0){
					a[i]=a[i-1]+d[i];
				}
				else {
					ok=false;
					break;
				}
			}
		}
		if(ok){
			for (int i=1;i<=n;i++){
				cout<<a[i]<<" ";
			}
		}
		else cout<<"-1";
		cout<<endl;
	}
	return 0;
}
