#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
bool snt(int n){
	for (int i=2;i<=sqrt(n);i++){
		if(n%i==0)return false;
	}
	return true;
}
bool tang(int n){
	while(n>=10){
		int a=n%10;
		if(a<=(n/10)%10)return false;
		n/=10;
	}
	return true;
}
bool giam(int n){
	int a=n%10;
	int nho=n;
	n/=10;
	while(n>0){
		int b=n%10;
		if(a>=b){
			return false;
		}
		n/=10;
		a=b;
	}
	
	return true;
}
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int cnt=0;
		int m;
		cin>>m;
		for (int i=pow(10,m-1);i<pow(10,m);i++){
			if(tang(i)||giam(i)){
				if (snt(i))cnt++;
			}
		}
		cout<<cnt<<endl;
	}
	return 0;
}
