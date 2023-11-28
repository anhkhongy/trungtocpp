#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int dem=0;
class SinhVien{
	private:
		string msv,ten,ns,lop;
		double gpa;
	public:
		friend istream& operator >> (istream &in,SinhVien &a){
			dem++;
			string res="";
			res+=to_string(dem);
			while(res.length()<3){
				res="0"+res;
			}	
			res="SV"+res;
			a.msv=res;
			in.ignore();
			getline(in,a.ten);
			stringstream ss(a.ten);
			string tmp;
			vector<string> v;
			while(ss>>tmp){
				tmp[0]=toupper(tmp[0]);
				for (int i=1;i<tmp.length();i++){
					tmp[i]=tolower(tmp[i]);
				}
				v.push_back(tmp);
			}
			string rol="";
			for (string x:v){
				rol+=x+" ";
			}
			a.ten=rol;
			in>>a.ns>>a.lop>>a.gpa;
			if(a.ns[1]=='/'){
				a.ns.insert(0,"0");
			}
			if(a.ns[4]=='/'){
				a.ns.insert(3,"0");
			}
		}
		friend ostream& operator << (ostream &out, SinhVien a){
			cout<<a.msv<<" "<<a.ten<<a.ns<<" "<<fixed<<setprecision(2)<<a.gpa<<endl;
		}
		double getgpa(){
			return this->gpa ;
		}
		string getma(){
			return this->msv;
		}
};
bool cmp(SinhVien a,SinhVien b){
	if(a.getgpa()!=b.getgpa()){
		return a.getgpa()>b.getgpa();
	}
	return a.getma()<b.getma();
}
int main(int argc, char** argv) {
	int n;
	cin>>n;
	SinhVien a[n];
	for (int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n,cmp);
	for (int i=0;i<n;i++){
		cout<<a[i];
	}
	return 0;
}
