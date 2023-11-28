#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct thisinh{
	string hoten;
	string ngaysinh;
	double diem1,diem2,diem3;
	double tongdiem;
	
};
void nhap(thisinh &x){
	getline(cin,x.hoten);
	cin>>x.ngaysinh;
	cin>>x.diem1>>x.diem2>>x.diem3;
}
void in(thisinh x){
	x.tongdiem=x.diem1+x.diem2+x.diem3;
	cout<<x.hoten<<" "<<x.ngaysinh<<" "<<x.tongdiem;
}
int main(int argc, char** argv) {
	thisinh x;
	nhap(x);
	in(x);
	
	return 0;
}
