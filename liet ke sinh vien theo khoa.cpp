#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class SinhVien;

class SinhVien{
	private:
		string ma,ten,lop,email;
	public:
		friend istream &operator >> (istream &in,SinhVien &a){
			in>>a.ma;
			string ans=a.ma.substr(0,4);
			in.ignore();
			string s;
			getline(in,s);
			stringstream ss(s);
			string tmp;
			a.ten="";
			while(ss>>tmp){
				tmp[0]=toupper(tmp[0]);
				for (int i=1;i<tmp.length();i++){
					tmp[i]=tolower(tmp[i]);
				}
				a.ten+=tmp+" ";
			}
			a.ten.erase(a.ten.length()-1,1);
			in>>a.lop;
			in>>a.email;
			
			return in;
		}
		friend ostream &operator << (ostream &out, SinhVien a){
			out<<a.ma<<" "<<a.ten<<" "<<a.lop<<" "<<a.email<<endl;
			return out;
		}
		string getma(){
			return ma;
		}
};
int main(int argc, char** argv) {
	int n;
	cin>>n;
	SinhVien a[n];
	for (int i=0;i<n;i++){
		cin>>a[i];
	}
	int q;
	cin>>q;
	while(q--){
		string s;
		cin>>s;
		cout<<"DANH SACH SINH VIEN KHOA "<<s<<" :"<<endl;
		for(int i=0;i<n;i++){
			if(a[i].getma().substr(0,4)==s){
				cout<<a[i];
			}
		}
	}
	return 0;
}
