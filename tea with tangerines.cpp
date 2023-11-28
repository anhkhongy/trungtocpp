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
		int cnt=0;
		
		for (int i=2;i<=n;i++){
			cnt+=(a[i]-1)/(2*a[1]-1);
		}
		cout<<cnt<<endl;
	}
	return 0;
}
