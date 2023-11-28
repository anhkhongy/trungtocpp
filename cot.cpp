#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	cin>>n;
	int a[n+1];
	for (int i=1;i<=n;i++){
		cin>>a[i];
	}
	int L[n+1];
	memset(L,0,sizeof(L));
	a[0]=a[1];
	for (int i=2;i<=n;i++){
		L[i]=min(L[i-1]+abs(a[i]-a[i-1]),L[i-2]+abs(a[i]-a[i-2]));
	}
	
	return 0;
}
