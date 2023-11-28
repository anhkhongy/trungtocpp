#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct SinhVien{
	int stt;
	string msv,ten,lop,email,dn;
};
bool cmp(SinhVien a,SinhVien b){
	return a.ten<b.ten;
}

int main(int argc, char** argv) {
	int n;
	cin>>n;
	cin.ignore();
	SinhVien a[n];
	for (int i=0;i<n;i++){
		a[i].stt=i+1;
		getline(cin,a[i].msv);
		getline(cin,a[i].ten);
		getline(cin,a[i].lop);
		getline(cin,a[i].email);
		getline(cin,a[i].dn);
	}
	sort(a,a+n,cmp);
	int q;
	cin>>q;
	string s;
	for(int i=0;i<q;i++){
		
		cin>>s;
		for (int j=0;j<n;j++){
			if(a[j].dn==s){
				cout<<a[j].stt<<" "<<a[j].msv<<" "<<a[j].ten<<" "<<a[j].lop<<" "<<a[j].email<<" "<<a[j].dn;
				cout<<endl;
			}
		}
		
	}
	return 0;
}
