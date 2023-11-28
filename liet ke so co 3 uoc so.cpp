#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
bool snt(int n){
	for (int i=2;i<=sqrt(n);i++){
		if(n%i==0)return false;
	}
	return true;
}
void scp(int n){
	for (int i=2;i<=sqrt(n);i++){
		if(snt(i)){
			cout<<i*i<<' ';
		}
	}
	
}
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		scp(n);
		cout<<endl;
	}
	return 0;
}
