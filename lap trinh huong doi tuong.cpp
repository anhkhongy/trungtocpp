#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/* class : lop
thuoc tinh :attribute;
phuong thuc :method,behavior
object:doi tuong
constructor:ham khoi tao
encapsulation:dong goi
access modifier:
_private(thuong la thuoc tinh, chi thao tac ben trong lop
_public
_protected(ke thua)
_this :con tro truyen cac doi tuong dung truoc cac thuoc tinh
_setter getter: ham de chuyen private thanh public
_bien static: ham chung cho class:vi du SV001->SV002->SV003
_friend function:ham khong thuoc class nhung van su dung duoc private
_friend class:lop ban co the truy cap vao private cua lop khac*/
class GiaoVien;
class SinhVien;

class SinhVien{
	friend class GiaoVien;
	private:
		string id,ten,ns;
		double gpa;
		static int dem;
	public:
		SinhVien();
		SinhVien(string,string,string,double);
		void nhap();
		void in();
		void xinchao();
		void dihoc();
		double getgpa();
		void setgpa(double);
		void tangdem();
		int getdem();
		friend void ChuanHoa(SinhVien&);
		friend void inthongtin(SinhVien);
};

void inthongtin(SinhVien x){
	cout<<x.id<<" "<<x.ten;
}
void ChuanHoa(SinhVien &x){
	string res="";
	stringstream ss(x.ten);
	string tmp;
	while(ss>>tmp){
		res+=toupper(tmp[0]);
		for (int i=1;i<tmp.length();i++){
			res+=tolower(tmp[i]);
		}
		res+=" ";
	}
	res.erase(res.length()-1);
	x.ten=res;
}
SinhVien::SinhVien(){
	id=ten=ns="";
	gpa=0;
}
int SinhVien::dem=0;
void SinhVien::tangdem(){
	++dem;
}
int SinhVien::getdem(){
	return dem;
}
void SinhVien::xinchao(){
	cout<<"Hello"<<endl;
}
void SinhVien::dihoc(){
	cout<<"dihoc\n";
}

SinhVien::SinhVien(string id,string ten,string ns,double gpa){
	cout<<"ham da duoc goi";
}
void SinhVien::nhap(){
	++dem;
	this->id = "SV"+string(3-to_string(dem).length(),'0')+to_string(dem);
	
	cout<<"nhap ten:";getline(cin,this->ten);
	cout<<"nhap ns:";cin>>this->ns;
	cout<<"nhap diem:";cin>>this->gpa;
	cin.ignore();
}
void SinhVien::in(){
	cout<<id<<" "<<ten<<" "<<ns<<" "<<gpa;
}
double SinhVien::getgpa(){
	return this->gpa;
}
bool cmp(SinhVien a,SinhVien b){
	return a.getgpa()<b.getgpa();
}
void SinhVien::setgpa(double gpa){
	this->gpa=gpa;//gan gpa cua doi tuong bang gpa
}
class GiaoVien{
	private:
		string khoa;
	public:
		void update(SinhVien&);
};
void GiaoVien::update(SinhVien& x){
	x.gpa=3.2;
}
int main(int argc, char** argv) {
	/*int n;
	cin>>n;
	
	SinhVien a[100];
	for (int i=0;i<n;i++){
		a[i].nhap();
	}
	sort(a,a+n,cmp);
	for (int i=0;i<n;i++){
		a[i].in();
		cout<<endl;
	}*/
	SinhVien x;
	x.nhap();
	GiaoVien y;
	y.update(x);
	ChuanHoa(x);
	x.in();
	return 0;
}
