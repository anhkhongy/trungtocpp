#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct phanso{
	long long x;
	long long y;
};
	void nhap(phanso &p){
		cin>>p.x>>p.y;
	}
	void rutgon(phanso &p){
		long long a=__gcd(p.x,p.y);
		p.x/=a;
		p.y/=a;
	}
	void in(phanso p){
		cout<<p.x<<"/"<<p.y<<endl;
	}

int main(int argc, char** argv) {
	phanso p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}
