#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
bool snt(int n){
	if(n==0||n==1)return false;
	else{
		for(int i=2;i<=sqrt(n);i++){
			if(n%i==0){
				return false;
			}
		}
	}
	return true;
}
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int check=0;
		for(int i=2;i<=n/2;i++){
			if(snt(i)&&snt(n-i)){
				cout<<i<<' '<<n-i<<endl;
				check=1;
				break;
			}
		}
		if(check==0){
			cout<<"-1"<<endl;
		}
	}
	return 0;
}
