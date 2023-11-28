#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int n,p;cin>>n>>p;
		int cnt=0,k=1;
		while(p*k<=n){
			int m=p*k;
			while(m%p==0){
				cnt++;
				m/=p;
			}
			k++;
		}
		cout<<cnt<<endl;
	}
	return 0;
}
