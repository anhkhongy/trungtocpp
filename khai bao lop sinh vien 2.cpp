#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class SinhVien{
	private:
		string ten,lop,ns;
		float gpa;
	public:
		friend istream& operator >> (istream& in,SinhVien &a);
		friend ostream& operator << (ostream& out,SinhVien a);
};
istream& operator >> (istream& in,SinhVien &a){
	getline(in,a.ten);
	getline(in,a.lop);
	getline(in,a.ns);
	in>>a.gpa;
	return in;
}
ostream& operator << (ostream& out,SinhVien a){
	cout<<"B20DCCN001"<<" ";
	cout<<a.ten<<" ";
	cout<<a.lop<<" ";
	if(a.ns[2]!='/'){
		a.ns.insert(a.ns.begin(),'0');
	}
	if(a.ns[5]!='/'){
		a.ns.insert(a.ns.begin()+3,'0');
	}
	cout<<a.ns<<" ";
	cout<<fixed<<setprecision(2)<<a.gpa;
	return out;
}
int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}
