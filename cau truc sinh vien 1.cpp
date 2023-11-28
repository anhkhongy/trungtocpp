#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct SinhVien{
	string ten,lop,ns;
	float gpa;
};
void nhap(SinhVien &a){
	getline (cin,a.ten);
	cin>>a.lop>>a.ns;
	cin>>a.gpa;
}
void in(SinhVien a){
	cout<<"B20DCCN001"<<" ";
	cout<<a.ten<<" ";
	cout<<a.lop<<" ";
	if(a.ns[1]=='/')a.ns="0"+a.ns;
	if(a.ns[4]=='/')a.ns.insert(3,"0");
	cout<<a.ns<<" ";
	cout<<fixed<<setprecision(2)<<a.gpa;
}
int main(int argc, char** argv) {
	struct SinhVien a;
    nhap(a);
    in(a);
	return 0;
}
