#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class NhanVien{
	private:
		string ma,ten,gt,ns,dc,date;
		long mst;
	public:
		friend istream& operator >> (istream& in, NhanVien &a);
		friend ostream& operator << (ostream& out,NhanVien a);
		
};
istream& operator >> (istream& in, NhanVien &a){
	a.ma="00001";
	getline(in,a.ten);
	in>>a.gt;
	in>>a.ns;
	in.ignore();
	getline(in,a.dc);
	in>>a.mst;
	in>>a.date;
	return in;
}
ostream& operator << (ostream& out,NhanVien a){
	cout<<a.ma<<" "<<a.ten<<" "<<a.gt<<" "<<a.ns<<" "<<a.dc<<" "<<a.mst<<" "<<a.date;
	return out;
}
int main(int argc, char** argv) {
	NhanVien x;
	cin>>x;
	cout<<x;
	
	
	return 0;
}
