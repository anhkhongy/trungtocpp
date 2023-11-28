#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
bool nt(int n){
	for (int i=2;i<=sqrt(n);i++){
		if(n%i==0)return false;
	}
	return true;
}
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		for(int i=2;i<=n/2;i++){
			if(nt(i)&&nt(n-i)){
				cout<<i<<' '<<n-i<<endl;
				break;
			}
		}
	}
	return 0;
}
