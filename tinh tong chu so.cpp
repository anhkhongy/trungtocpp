#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int tcs(int n){
	while(n/10>0){
		int tong=0;
		while(n>0){
			int a=n%10;
			tong=tong+a;
			n=n/10;
		}
		n=tong;
	}
	return n;
}
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cout<<tcs(n)
	}
	return 0;
}
