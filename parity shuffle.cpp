#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int p[n+1];
		for(int i=1;i<=n;i++)cin>>p[i];
		cout<<n-1<<endl;
		if(n!=1)cout<<1<<' '<<n<<endl;
		for(int i=2;i<n;i++){
			if(p[i]%2==p[1]%2)cout<<i<<' '<<n<<endl;
			else cout<<1<<' '<<i<<endl;
		}
	} 
	return 0;
}
