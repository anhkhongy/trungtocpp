#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class SinhVien{
	private:
		string ten,lop,ns;
		float gpa;
	public:
		void nhap();
		void xuat();
};
void SinhVien::nhap(){
	
	getline(cin,this->ten);
	getline(cin,this->lop);
	getline(cin,this->ns);
	cin>>gpa;
}
void SinhVien::xuat(){
	cout<<"B20DCCN001"<<" ";
	cout<<this->ten<<" ";
	cout<<this->lop<<" ";
	if(this->ns[2]!='/'){
		this->ns.insert(this->ns.begin(),'0');
	}
	if(this->ns[5]!='/'){
		this->ns.insert(this->ns.begin()+3,'0');
	}
	cout<<this->ns<<" ";
	cout<<fixed<<setprecision(2)<<this->gpa;
}
int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}
