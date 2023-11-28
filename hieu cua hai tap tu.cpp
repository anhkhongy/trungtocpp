#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		
		string s1,s2;
		getline(cin,s1);
		
		getline(cin,s2);
		set<string> se;
		set<string> sf;
		stringstream ss2(s2);
		string tmp2;
		while(ss2>>tmp2){
			se.insert(tmp2);
		}
		stringstream ss1(s1);
		string tmp1;
		while(ss1>>tmp1){
			sf.insert(tmp1);
		}
		for (string x:sf){
			if(se.find(x)==se.end()){
				cout<<x<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}
