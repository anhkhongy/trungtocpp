#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct ThiSinh{
	string ten,ns;
	float d1,d2,d3;
};
void nhap(ThiSinh &a){
	getline(cin,a.ten);
	cin>>a.ns;
	cin>>a.d1>>a.d2>>a.d3;
}
void in(ThiSinh a){
	cout<<a.ten<<" ";
	if(a.ns[1]=='/')a.ns="0"+a.ns;
	if(a.ns[4]=='/')a.ns.insert(3,"0");
	cout<<a.ns<<" ";
	float sum=a.d1+a.d2+a.d3;
	cout<<fixed<<setprecision(1)<<sum;
}
int main(int argc, char** argv) {
	struct ThiSinh A;
    nhap(A);
    in(A);
	return 0;
}
