#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
string s1="code.ptit.edu.vn";
struct sv{
	string ma,ten;
	int dem=0;
};
int main(int argc, char** argv) {
	int n;
	cin>>n;
	sv a[n];
	map<string,int> mp1;
	map<string,int> mp2;
	for (int i=0;i<n;i++){
		cin>>a[i].ma;
		cin.ignore();
		getline(cin,a[i].ten);
		mp1[a[i].ma]=1;
		mp2[a[i].ma]=0;
	}
	string ngay,gio,msv,web;
	int m;
	cin>>m;
	
	while(m--){
		cin>>ngay>>gio>>msv>>web;
		if(web!=s1){
			mp1[msv]=0;
		}
		else {
			mp2[msv]=1;
		}
	}
	for (int i=0;i<n;i++){
		cout<<a[i].ma<<" "<<a[i].ten<<" ";
		if(mp1[a[i].ma]==0||mp2[a[i].ma]==0){
			cout<<"FAIL"<<endl;
		}
		else cout<<"OK"<<endl;
	}
	return 0;
}
