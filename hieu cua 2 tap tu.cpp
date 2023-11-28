#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
set<string> convert(string s){
	stringstream ss(s);
	string tmp;
	set<string>se;
	while(ss>>tmp){
		se.insert(tmp);
	}
	return se;
}
int main(int argc, char** argv) {
	int t;cin>>t;
	cin.ignore();
	while(t--){
		string s1;
		string s2;
		getline(cin,s1);
		getline(cin,s2);
		set<string> se1=convert(s1);
		set<string> se2=convert(s2);
		for(string x:se1){
			if(se2.find(x)==se2.end()){
				cout<<x<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}
