#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	cin>>n;
	int b[n+1],c[n+1];
	b[0]=0,c[n+1]=101;
	int a[n+1];
	int ans=INT_MIN;
	for (int i=1;i<=n;i++){
		cin>>a[i];
	}
	for (int i=1;i<=n;i++){
		b[i]=max(b[i-1],a[i]);
		c[n-i+1]=min(c[n-i+2],a[n-i+1]);
	}
	
	for (int i=1;i<n;i++){
		ans=max(ans,b[i]-c[i+1]);
	}
	if(ans>=0)cout<<ans;
	else cout<<"Lo nang roi!";
	return 0;
}
