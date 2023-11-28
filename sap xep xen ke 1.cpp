#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t; cin>>t; while(t--){ int n; cin>>n; int a[n]; for(int i=0;i<n;i++){ cin>>a[i]; } sort(a,a+n); if(n%2==0){ for(int i=n-1;i>=n/2;i--){ cout<<a[i]<<" "<<a[n-1-i]<<" "; } } else{ for(int i=n-1;i>n/2;i--){ cout<<a[i]<<" "<<a[n-1-i]<<" "; } cout<<a[n/2]; } cout<<endl;}
	return 0;
}
