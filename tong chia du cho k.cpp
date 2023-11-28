#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		long long tong =0;
		for (int i=1;i<=n;i++){
			tong+=i%k;
		}
		if(tong==k)cout<<"1"<<endl;
		else cout<<"0"<<endl;
	}
	return 0;
}
