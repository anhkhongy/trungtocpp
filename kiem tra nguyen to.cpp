#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
bool snt(long n){
	if(n==0||n==1)return false;
	else{
	
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return false;
		}
	}}
	return true;
}
int main(int argc, char** argv) {
	long n;cin>>n;
	if(snt(n)){
		cout<<"YES";
	}
	else cout<<"NO";
	return 0;
}
