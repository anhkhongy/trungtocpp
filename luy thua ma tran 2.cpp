#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct data{
	long long x[10][10];
};
int n,k;
long long mod=1e9+7;
struct data operator*(struct data a,struct data b){
	struct data c;
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			c.x[i][j]=0;
			for (int k=0;k<n;k++){
				c.x[i][j]=(c.x[i][j]+a.x[i][k]*b.x[k][j]%mod)%mod;
			}
		}
	}
	return c;
}
struct data poww(struct data a,long long k){
	if(k==1){
		return a;
	}
	else {
		struct data xx=poww(a,k/2);
		if(k%2==0){
			return xx*xx;
		}
		else {
			return a*xx*xx;
		}
	}
}
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		struct data a;
		for (int i=0;i<n;i++){
			for (int j=0;j<n;j++){
				cin>>a.x[i][j];
			}
		}
		a=poww(a,k);
		long long s=0;
		for (int i=0;i<n;i++){
			s=(s+a.x[i][n-1])%mod;
		}
		cout<<s<<endl;
	}
	return 0;
}
