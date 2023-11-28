#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct MatHang{
	int ma;
	string ten,nhom;
	float gm;
	float gb;
};
bool cmp(MatHang a,MatHang b){
	return (a.gb-a.gm)>(b.gb-b.gm);
}
void nhap(MatHang ds[],int n){
	for (int i=1;i<=n;i++){
		
		ds[i].ma=i;
		cin.ignore();
		getline(cin,ds[i].ten);
		getline(cin,ds[i].nhom);
		cin>>ds[i].gm;
		cin>>ds[i].gb;
	}
}
void sapxep(MatHang ds[],int n){
	sort(ds+1,ds+n+1,cmp);
}
void in(MatHang ds[],int n){
	
	for (int i=1;i<=n;i++){
		cout<<ds[i].ma<<" ";
		cout<<ds[i].ten<<" "<<ds[i].nhom<<" ";
		cout<<fixed<<setprecision(2)<<ds[i].gb-ds[i].gm;
		cout<<endl;
	}
}
int main(int argc, char** argv) {
	int n;
	cin>>n;
	MatHang ds[100];
	nhap(ds,n);
	sapxep(ds,n);
	in(ds,n);
	return 0;
}
