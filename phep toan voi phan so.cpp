#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct PhanSo{
	long long tu;
	long long mau;
	
	
};

void rutgon(PhanSo &x){
	long long n=__gcd(x.tu,x.mau);
	x.tu/=n;
	x.mau/=n;
}
void process(PhanSo a,PhanSo b){
	PhanSo c,d;
	long long n=__gcd(a.mau,b.mau);
	long long lcm=a.mau*b.mau/n;
	c.tu=a.tu*lcm/a.mau+b.tu*lcm/b.mau;
	c.mau=lcm;
	rutgon(c);
	c.tu*=c.tu;
	c.mau*=c.mau;
	rutgon(c);
	d.tu=a.tu*b.tu*c.tu;
	d.mau=a.mau*b.mau*c.mau;
	rutgon(d);
	cout<<c.tu<<"/"<<c.mau<<" ";
	cout<<d.tu<<"/"<<d.mau;
		cout<<endl;
}

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		PhanSo A;
		PhanSo B;
		cin>>A.tu>>A.mau>>B.tu>>B.mau;
		process(A,B);
	}
}
