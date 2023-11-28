#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		long long a,b,x,y,n;
		cin>>a>>b>>x>>y>>n;
		long long tich;
		long long c,d;
		long long mi,ma;
		mi=min(a-x,n);
		c=a-mi;
		ma=min(b-y,n-mi);
		d=b-ma;
		tich=c*d;
		mi=min(b-y,n);
		ma=min(a-x,n-mi);
		c=a-ma;
		d=b-mi;
		tich=min(tich,c*d);
		cout<<tich<<endl;
	}
	return 0;
}
