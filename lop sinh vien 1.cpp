#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class SinhVien{
	private:
		string id,ten,lop,ns;
		float gpa;
		static int dem;
	public:
		void nhap();
		void in();
};
int SinhVien::dem=0;
void SinhVien::nhap(){
	getline(cin,ten);
	cin>>lop>>ns;
	cin>>gpa;
}
void SinhVien::in(){
	++dem;
	this->id="B20DCCN"+string(3-to_string(dem).length(),'0')+to_string(dem);
	cout<<id<<" ";
	cout<<ten<<" "<<lop<<" "<<ns;
}
int main(int argc, char** argv) {
	SinhVien a;
	a.nhap();
	a.in();
	return 0;
}
