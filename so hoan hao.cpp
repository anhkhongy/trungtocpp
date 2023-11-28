#include <bits/stdc++.h>
using namespace std;
/*neu p la so nguyen to va 2^p-1 cung la so nguyen to thi 2^(p-1)*(2^p-1)la so hoan hao

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
bool nt(long long n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0)return false;
	}
	return true;
}
bool shh(long long n){
	for (int i=1;i<=32;i++){
		if(nt(i)){
			long long tmp=pow(2,i)-1;
			if(nt(tmp)){
				long long hh=tmp*pow(2,i-1);
				if(hh==n)return true;
			}
		}
	}
	return false;
}
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		if(shh(n)){
			cout<<"1"<<endl;
		}
		else cout<<"0"<<endl;
	}
	return 0;
}
