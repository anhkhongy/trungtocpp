#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct phanso{
	long p;
	long q;
	
};
void nhap(phanso x){
	cin>>x.p>>x.q;
}
phanso tong(phanso x,phanso y){
	long b=__gcd(x.q,y.q);
	long a=x.q*y.q/gcd;
	phanso tong;
	tong.p=x.p*(a/x.q)+y.p*(a/y.q);
	tong.q=a;
	return tong;
}
void rutgon(phanso x){
	long a=__gcd(x.p,x.q);
	x.p/=a;
	x.q/=a;
}
void in(phanso x){
	cout<<x.p<<"/"<<x.q<<endl;
}
int main(int argc, char** argv) {
	phanso x;
	phanso y;
	phanso tong;
	nhap(x);
	nhap(y);
	tong=tong(x,y);
	rutgon(tong);
	in(tong);
	return 0;
}
