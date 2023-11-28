#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct SinhVien{
	string ten,lop,ns;
	float gpa;
};
void nhap(SinhVien ds[],int n){
	for (int i=1;i<=n;i++  ){
		cin.ignore();
		getline(cin,ds[i].ten);
		cin>>ds[i].lop;
		cin>>ds[i].ns;
		cin>>ds[i].gpa;
		
	}
}
void in(SinhVien ds[],int n){
	
	for (int i=1;i<=n;i++){
		string res="";
		string s=to_string(i);
		while(s.size()<3)s="0"+s;
		res="B20DCCN"+s;
		cout<<res<<" ";
		cout<<ds[i].ten<<" ";
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
    in(ds, N);
    return 0;
}
