#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int pt(int n,int k){
	int value=-1;
	int cnt=0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			while(n%i==0){
				++cnt;
				if(cnt==k){
					value=i;
					break;
				}
				n/=i;
			}
		}
	}
	if(n>1){
		cnt++;
		if(cnt==k){
			value=n;
		}
	}
	return value;
}
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int n;cin>>n;
		int k;cin>>k;
		cout<<pt(n,k)<<endl;
	}
	return 0;
}
