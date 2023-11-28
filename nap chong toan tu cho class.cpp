#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class SinhVien{
	private:
		string id,ten,ns;
		double gpa;
	public:
		friend istream& operator >> (istream &in,SinhVien& a);//nap chong toan tu cho class
		friend ostream& operator << (ostream &out,SinhVien a);
		friend bool operator <(SinhVien a,SinhVien b);
};
bool operator < (SinhVien a,SinhVien b){
	return a.gpa<b.gpa;
}//khi sap xep cac class thi se sap xep theo operator nho hon
istream& operator >> (istream &in,SinhVien& a){
	cout<<"Nhap id: ";in>>a.id;
	cout<<"Nhap ten: ";
	in.ignore();
	getline(in,a.ten);
	cout<<"Nhap ns: ";in>>a.ns;
	cout<<"Nhap diem: ";in>>a.gpa;
}
ostream& operator << (ostream &out,SinhVien a){
	cout<<a.id<<" "<<a.ten<<" "<<a.ns<<" "<<a.gpa;
	return out;
}
int main(int argc, char** argv) {
	SinhVien x,y;
	cin>>x>>y;
	if(x<y){
		cout<<"yes";
	}
	else cout<<"no";
	return 0;
}
