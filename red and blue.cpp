#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int n,m;
		
		cin>>n;
		int r[n+1];
		for (int i=1;i<=n;i++){
			cin>>r[i];
		}
		cin>>m;
		int b[m+1];
		for (int i=1;i<=m;i++){
			cin>>b[i];
		}
		int ma1=0,ma2=0;
		r[0]=0,b[0]=0;
		for (int i=1;i<=n;i++){
			r[i]+=r[i-1];
			ma1=max(ma1,r[i]);
		}
		for (int i=1;i<=m;i++){
			b[i]+=b[i-1];
			ma2=max(ma2,b[i]);
		}
		
		cout<<ma1+ma2<<endl;
	}
	return 0;
}
