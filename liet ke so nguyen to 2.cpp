#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void pt(long n){
	
	for (int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			while(n%i==0){
				cout<<i<<' ';
				n/=i;
			}
		}
	}
	if(n>1)cout<<n;
}
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		long n;cin>>n;
		pt(n);
		cout<<endl;
	}
	return 0;
}
