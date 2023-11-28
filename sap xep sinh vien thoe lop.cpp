#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class SinhVien{
	private:
		string ma,ten,lop,email;
	public:
		friend istream& operator >>(istream& in,SinhVien &a);
		friend ostream& operator <<(ostream& out,SinhVien a);
		string getlop(){
			return this->lop;
		}
};
istream& operator >> (istream &in,SinhVien& a){
	in>>a.ma;
	
	in.ignore();
	getline(in,a.ten);
	in>>a.lop;
	in>>a.email;
}
ostream& operator << (ostream &out,SinhVien a){
	cout<<a.ma<<endl<<a.ten<<endl<<a.lop<<endl<<a.email;
	return out;
}
bool cmp(SinhVien a,SinhVien b){
	return a.getlop()<b.getlop();
}
int main(int argc, char** argv) {
	int n;
	cin>>n;
	SinhVien a[n];
	for (int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a,a+n,cmp);
	for (int i=1;i<=n;i++){
		cout<<a[i]<<endl;
	}
	return 0;
}
