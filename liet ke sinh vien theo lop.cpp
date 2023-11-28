#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class SinhVien{
	private:
		string ma,ten,lop,email;
	public:
		friend istream& operator >> (istream& in,SinhVien &a);
		friend ostream& operator << (ostream &out,SinhVien a);
		string getma(){
			return this->ma;
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
	cout<<a.ma<<" "<<a.ten<<" "<<a.lop<<" "<<a.email;
	return out;
}
void ChuanHoa(string s){
	for (char &x:s){
		x=toupper(x);
	}
}
string ChuDau(string s){
	stringstream ss(s);
	string tmp;
	string res="";
	while(ss>>tmp){
		res+=tmp[0];
	}
	return res;
}
int main(int argc, char** argv) {
	int n;
	cin>>n;
	map<string,vector<SinhVien>> mp;
	for (int i=1;i<=n;i++){
		SinhVien tmp;
		cin>>tmp;
		if(tmp.getma()[0]!='E'){
		
		mp[(tmp.getma().substr(5,2))].push_back(tmp);}
	}
	cin.ignore();
	string s;

	getline (cin,s);
	ChuanHoa(s);
	string res=ChuDau(s);
	cout<<"Danh sach sinh vien nganh "<<s<<endl;
	for (SinhVien x:mp[res]){
		cout<<x<<endl;
	}
	return 0;
}
