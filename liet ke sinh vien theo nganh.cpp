#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class SinhVien{
	private:
		string ma,ten,lop,email;
	public:
		friend istream& operator >> (istream& in,SinhVien &a);
		friend ostream& operator << (ostream& out,SinhVien a);
		string getma(){
			return ma;
		}
		string getlop(){
			return lop;
		}
};
istream& operator >> (istream& in,SinhVien &a){
	in>>a.ma;
	in.ignore();
	getline(in,a.ten);
	in>>a.lop;
	in>>a.email;
	return in;
}
string convert(string s){
	stringstream ss(s);
	string tmp;
	string res="";
	
	while(ss>>tmp){
		res+=toupper(tmp[0]);
	}
	return res.substr(0,2);
}
ostream& operator << (ostream& out,SinhVien a){
	out<<a.ma<<" "<<a.ten<<" "<<a.lop<<" "<<a.email<<endl;
	return out;
}
int main(int argc, char** argv) {
	int n;
	cin>>n;
	SinhVien a[n];
	for (int i=0;i<n;i++){
		cin>>a[i];
	}
	int k;
	cin>>k;
	cin.ignore();
	while(k--){
		string s;
		getline(cin,s);
		
		for (int i=0;i<s.length();i++){
			s[i]=toupper(s[i]);
		}
		cout<<"DANH SACH SINH VIEN NGANH "<<s<<":"<<endl;
		for (int i=0;i<n;i++){
			if(convert(s)=="AT"&&convert(s)=="CN"){
				if(a[i].getlop()[0]!='E'&&a[i].getma().substr(5,2)==convert(s)){
					cout<<a[i];
				}
			}
			else {
				if(a[i].getma().substr(5,2)==convert(s)){
					cout<<a[i];
				}
			}
		}
		
	}
	return 0;
}
