#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void sang(int l,int r){
	int prime[l-r+1];
	for(int i=2;i<=sqrt(r);i++){
		for(int j=max(i*i,(l+i-1)/i*i);j<=r;j+=i){
			prime[j-l]=0;
		}
	}
	int cnt=0;
	for(int i=max(l,2);i<=r;i++){
		if(prime[i-l]){
			cnt++;
		}
	}
	cout<<cnt<<endl;
}
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
	
	int l;int r;
	cin>>l>>r;
	sang(l,r);
	
}
	return 0;
}
