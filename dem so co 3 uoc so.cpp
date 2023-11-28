#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
bool nt(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0)return false;
	}
	return true;
}
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		long long l,r;
		cin>>l>>r;
		int b;
		int a=sqrt(l);
		int cnt=0;
		if(a*a>=l){
			b=a;
		}
		else b=a+1;
		
		for(int i=b;i<=sqrt(r);i++){
			if(nt(i))cnt++;
		}
		cout<<cnt-1<<endl;
	}
	
	return 0;
}
