#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
long tcs(long n){
	int tong=0;
	while(n>0){
		int a=n%10;
		tong+=a;
		n/=10;
	}
	return tong;
}
long tnt(long n){
	int tong=0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			while(n%i==0){
				tong+=tcs(i);
				n/=i;
			}
		}
	}
	if(n>1)tong+=tcs(n);
	return tong;
}

int main(int argc, char** argv) {
	
		long n;
		cin>>n;
		if(tcs(n)==tnt(n))cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	
	return 0;
}
