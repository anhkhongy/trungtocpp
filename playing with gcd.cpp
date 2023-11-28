#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		bool ok=true;
		for (int i=0;i<n;i++){
			cin>>a[i];
		}
		if(n>2){
			for (int i=0;i<n-2;i++){
				if(a[i+1]%__gcd(a[i+2],a[i])){
					ok=false;
				}
			}
		}
		if(!ok){
			cout<<"NO"<<endl;
		}
		else cout<<"YES"<<endl;
	}
	return 0;
}
