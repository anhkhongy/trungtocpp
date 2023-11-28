#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class business{
	private:
		string ma,ten;
		int sv;
	public:
		friend istream& operator >> (istream& in,business &a);
		friend ostream& operator << (ostream& out,business a); 
		int getsv(){
			return sv;
		}
		string getma(){
			return ma;
		}
};
istream& operator >> (istream& in,business &a){
	in>>a.ma;
	in.ignore();
	getline(in,a.ten);
	in>>a.sv;
	return in;
}
ostream& operator << (ostream& out,business a){
	out<<a.ma<<" "<<a.ten<<" "<<a.sv<<endl;
	return out;
}
bool cmp(business a,business b){
	if(a.getsv()!=b.getsv()){
		return a.getsv()>b.getsv();
	}
	return a.getma()<b.getma();
}
int main(int argc, char** argv) {
	int n;
	cin>>n;
	business a[n];
	for (int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n,cmp);
	int q;
	cin>>q;
	while(q--){
		int c,b;
		cin>>c>>b;
		cout<<"DANH SACH DOANH NGHIEP NHAN TU "<<c<<" DEN "<<b<<" SINH VIEN:"<<endl;
		for (int i=0;i<n;i++){
			if(a[i].getsv()>=c&&a[i].getsv()<=b){
				cout<<a[i];
			}
		}
	}
	
	return 0;
}
