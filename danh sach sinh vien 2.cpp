#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct SinhVien{
	string ma,ten,lop,ns;
	float gpa;
};
void nhap (SinhVien ds[],int n){
	for (int i=1;i<=n;i++){
		string res="";
		string s=to_string(i);
		while(s.size()<3)s="0"+s;
		res="B20DCCN"+s;
		ds[i].ma=res;
		cin.ignore();
		getline(cin,ds[i].ten);
		cin>>ds[i].lop>>ds[i].ns>>ds[i].gpa;
	}
}
bool cmp(SinhVien a,SinhVien b){
	return a.gpa>b.gpa;
}
void sapxep(SinhVien ds[],int n){
	sort(ds+1,ds+n+1,cmp);
}
void chuanhoa(string &s){
	stringstream ss(s);
	string tmp;
	string res="";
	vector<string> v;
	while(ss>>tmp){
		tmp[0]=toupper(tmp[0]);
		for (int i=1;i<tmp.length();i++){
			tmp[i]=tolower(tmp[i]);
		}
		v.push_back(tmp);
	}
	for (string x:v){
		cout<<x<<" ";
	}
}

void in(SinhVien ds[],int n){
	for (int i=1;i<=n;i++){
		
		cout<<ds[i].ma<<" ";
		chuanhoa(ds[i].ten);
		
		cout<<ds[i].lop<<" ";
		if(ds[i].ns[1]=='/')ds[i].ns="0"+ds[i].ns;
		if(ds[i].ns[4]=='/')ds[i].ns.insert(3,"0");
		cout<<ds[i].ns<<" ";
		cout<<fixed<<setprecision(2)<<ds[i].gpa;
		cout<<endl;
	}
}
int main(int argc, char** argv) {
	struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}
