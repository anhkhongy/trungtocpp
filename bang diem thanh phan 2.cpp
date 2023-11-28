#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct SinhVien{
	string msv,ten,lop;
	double d1,d2,d3;
};
bool cmp(SinhVien x,SinhVien y){
	return x.ten<y.ten;
}
void nhap(SinhVien &a){
	cin.ignore();
	getline(cin,a.msv);
	getline(cin,a.ten);
	getline(cin,a.lop);
	cin>>a.d1>>a.d2>>a.d3;
}
void sap_xep(SinhVien ds[],int n){
	sort(ds,ds+n,cmp);
}
void in_ds(SinhVien ds[],int n){
	for (int i=0;i<n;i++){
		cout<<i+1<<" ";
		cout<<ds[i].msv<<" ";
		cout<<ds[i].ten<<" ";
		cout<<ds[i].lop<<" ";
		cout<<fixed<<setprecision(1)<<ds[i].d1<<" "<<ds[i].d2<<" "<<ds[i].d3;
		cout<<endl;
	}
}
int main(int argc, char** argv) {
	int n;
    cin >> n;
    SinhVien ds[n];
    for(int i = 0; i < n; i++) {
    	nhap(ds[i]);
	}
	sap_xep(ds, n);
    in_ds(ds,n);
	return 0;
}
