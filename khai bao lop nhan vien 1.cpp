#include<bits/stdc++.h>

using namespace std;
class NhanVien{
	private:
		string ten,gt,dc,ns,mst,date;
	public:
		void nhap();
		void xuat();
};
void NhanVien::nhap(){
	getline(cin,ten);
	getline(cin,gt);
	getline(cin,ns);
	getline(cin,dc);
	getline(cin,mst);
	getline(cin,date);
}
void NhanVien::xuat(){
	cout<<"00001"<<" ";
	cout<<ten<<" ";
	cout<<gt<<" ";
	if(ns[2]!='/'){
		ns.insert(ns.begin(),'0');
	}
	if(ns[5]!='/'){
		ns.insert(ns.begin()+3,'0');
	}
	cout<<ns<<" ";
	cout<<dc<<" ";
	cout<<mst<<" ";
	if(date[2]!='/'){
		date.insert(date.begin(),'0');
	}
	if(date[5]!='/'){
		date.insert(date.begin()+3,'0');
	}
	cout<<date<<" ";
}
int main(){
    NhanVien a;
    a.nhap();
    a.xuat();
    return 0;
}
