#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
bool check(long long n){
	for (int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			int mu=0;
			while(n%i==0){
				mu++;
				n/=i;
			}
			if(mu>=3){
				return true;
			}
		}
	}
	return false;
}
int main(int argc, char** argv) {
	long long n;
	cin>>n;
	if(check(n)){
		cout<<"YES\n";
	}
	else {
		cout<<"NO\n";
	}
	return 0;
}
