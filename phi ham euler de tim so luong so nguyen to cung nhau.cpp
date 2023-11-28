#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*phi ham euler:n=a^2*b*c voi a,b,c la cac so nguyen to thi so luong so nguyen to cung nhau voi n nho hon n la n*(1-1/a)(1-1/b)(1-1/c)*/
long long phi(long long n){
	long long res=n;
	for (int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			while(n%i==0)n/=i;
			res=res-res/i;
		}
		
	}
	if(n!=1){
		res=res-res/n;6
	}
	return res;
}
int main(int argc, char** argv) {
	long long n;
	cin>>n;
	cout<<phi(n)<<endl;
	return 0;
}
