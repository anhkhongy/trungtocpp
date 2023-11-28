#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct PhanSo{
	long long tu,mau;
};
void nhap(PhanSo &a){
	cin>>a.tu>>a.mau;
}
void rutgon(PhanSo &a){
	long long ucnn=__gcd(a.tu,a.mau);
	a.tu/=ucnn;
	a.mau/=ucnn;
}
void in (PhanSo a){
	cout<<a.tu<<"/"<<a.mau;
}
int main(int argc, char** argv) {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}
