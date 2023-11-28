#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define ll long long
struct NhanVien {
	string ma,cv,ten,ns;
	ll day,lcb,pc,th,tn;
};
bool cmp(NhanVien a,NhanVien b){
	if(a.tn!=b.tn){
		return a.tn>b.tn;
	}
	return a.ma<b.ma;
}
string convert(string s){
	if(s=="GD")return "Giam doc";
	if(s=="PGD")return "Pho giam doc";
	if(s=="TP")return "Truong phong";
	if(s=="NV")return "Nhan vien";
}
ll phucap(string s){
	if(s=="Giam doc")return 2000000;
	if(s=="Pho giam doc")return 1000000;
	if(s=="Truong phong")return 500000;
	if(s=="Nhan vien")return 200000;
}
float thuong(int n){
	if(n>=27)return 0.2;
	if(n>=25)return 0.1;
	else return 0;
}
int main(int argc, char** argv) {
	int n;
	cin>>n;
	NhanVien a[n];
	for (int i=0;i<n;i++){
		cin>>a[i].ma;
		cin.ignore();
		getline(cin,a[i].ten);
		cin>>a[i].ns>>a[i].day>>a[i].lcb;
		int k=0;
		string res="";
		while(a[i].ma[k]!='-'){
			res+=a[i].ma[k];
			++k;
		}
		a[i].cv=convert(res);
		a[i].pc=phucap(convert(res));
		a[i].th=thuong(a[i].day)*a[i].lcb*a[i].day;
		a[i].tn=a[i].lcb*a[i].day+a[i].pc+a[i].th;
	}
	sort(a,a+n,cmp);
	for (int i=0;i<n;i++){
		cout<<a[i].ma<<" "<<a[i].ten<<" "<<a[i].cv<<" "<<a[i].ns<<" "<<a[i].day<<" "<<a[i].lcb<<" "<<a[i].tn<<endl;
	}
	return 0;
}
