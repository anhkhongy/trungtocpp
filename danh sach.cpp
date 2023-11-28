#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class DoanhNghiep{
	private:
		string ma,ten;
		int nv;
	public:
		friend istream &operator >> (istream &in, DoanhNghiep &a){
			in>>a.ma;
			in.ignore();
			getline(in,a.ten);
			in>>a.nv;
			return in;
		}
		int getnv(){
			return nv; 
		}
		friend ostream &operator << (ostream &out,DoanhNghiep a){
			out<<a.ma<<" "<<a.ten<<" "<<a.nv<<endl;
			return out;
		}
		string getma(){
			return ma;
		}
};
bool cmp(DoanhNghiep a,DoanhNghiep b){
	if(a.getnv()!=b.getnv()){
		return a.getnv()>b.getnv();
	}
	return a.getma()<b.getma();
}
int main(int argc, char** argv) {
	int n;
	cin>>n;
	DoanhNghiep a[n];
	for (int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n,cmp);
	int q;
	cin>>q;
	while(q--){
		int b,c;
		cin>>b>>c;
		cout<<"DANH SACH DOANH NGHIEP NHAN TU "<<b<<" DEN "<<c<<" SINH VIEN:"<<endl;
		for (int i=0;i<n;i++){
			if(a[i].getnv()>=b&&a[i].getnv()<=c){
				cout<<a[i];
			}
		}
	}
	return 0;
}
