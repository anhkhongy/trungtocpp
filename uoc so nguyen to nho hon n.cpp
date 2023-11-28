#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int prime[10001];
void sang(int n){
	prime[0]=prime[1]=0;
	for(int i=2;i<=n;i++){
		prime[i]=1;
	}
	for(int i=2;i<=sqrt(n);i++){
		int k=i;
		while(i*k<=n){
			prime[i*k]=0;
			k++;
		}
	}
	for (int j=2;j<=n;j++){
		if(prime[j]==1){
			cout<<j<<' ';
		}
	}
}
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		sang(n);
		cout<<endl;
	}
	return 0;
}
