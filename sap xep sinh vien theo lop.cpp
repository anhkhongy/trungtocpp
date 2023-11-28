#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class SinhVien{
	private:
		string ma,ten,lop,email;
	public:
		friend istream& operator >> (istream& in,SinhVien &a){
			in>>a.ma;
			in.ignore();
			getline(in,a.ten);
			in>>a.lop;
			in>>a.email;
			return in;
		}
		friend ostream& operator << (ostream& out,SinhVien a){
			out<<a.ma<<" "<<a.ten<<" "<<a.lop<<" "<<a.email<<endl;
			return out;
		}
		friend bool operator < (SinhVien a,SinhVien b){
			return a.ma<b.ma;
		}
};

int main(int argc, char** argv) {
	int cnt=0;
	SinhVien a[1001];
	while(cin>>a[cnt]){
		++cnt;
	}
	sort(a,a+cnt);
	for (int i=0;i<cnt;i++){
		cout<<a[i];
	}
	return 0;
}
