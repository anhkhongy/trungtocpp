#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct PhanSo{ 
long long tu,mau; 
}; 
void rutgon(PhanSo &a){ long long tmp=__gcd(a.tu,a.mau); a.tu/=tmp; a.mau/=tmp; } void process(PhanSo a,PhanSo b){ PhanSo c,d; long long mc=(a.mau*b.mau)/__gcd(a.mau,b.mau); c.mau=pow(mc,2); c.tu=pow((a.tu*mc/a.mau+b.tu*mc/b.mau),2); rutgon(c); cout<<c.tu<<"/"<<c.mau<<" "; d.tu=a.tu*b.tu*c.tu; d.mau=a.mau*b.mau*c.mau; rutgon(d); cout<<d.tu<<"/"<<d.mau<<endl; }
int main(int argc, char** argv) {
	int t; cin >> t; while (t--) { PhanSo A; PhanSo B; cin >> A.tu >> A.mau >> B.tu >> B.mau; process(A, B);
}}
