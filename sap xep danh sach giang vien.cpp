#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int cnt=0;
string name(string s){
	for (int i=s.length()-1;i>=0;i--){
		if(s[i]==' '){
			return s.substr(i+1);
		}
	}
}
string chuanhoa(string s){
	stringstream ss(s);
	string tmp;
	string res="";
	while(ss>>tmp){
		tmp[0]=toupper(tmp[0]);
		res+=tmp[0];
	}
	return res;
}
class GiangVien{
	private:
		string ma,ten,mon;
	public:
		friend istream& operator >> (istream& in,GiangVien &a);
		friend ostream& operator << (ostream& out,GiangVien a);
		string getten(){
			return ten;
		}
		string getma(){
			return ma;
		}
}; 
istream& operator >> (istream& in,GiangVien &a){
	cnt++;
	string res="";
	if(cnt<10){
		res=res+"0"+to_string(cnt);
	}
	else {
		res=res+to_string(cnt);
	}
	res="GV"+res;
	a.ma=res;
	getline(in,a.ten);
	getline(in,a.mon);
	return in;
}

ostream& operator << (ostream& out,GiangVien a){
	out<<a.ma<<" "<<a.ten<<" "<<chuanhoa(a.mon)<<endl;
	return out;
}
bool cmp(GiangVien a,GiangVien b){
	if(name(a.getten())!=name(b.getten())){
		return name(a.getten())<name(b.getten());
	}
	return a.getma()<b.getma();
}
int main(int argc, char** argv) {
	int n;
	cin>>n;
	cin.ignore();
	GiangVien a[n];
	for (int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n,cmp);
	for (int i=0;i<n;i++){
		cout<<a[i];
	}
	return 0;
}
