#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		for(int i=0;i<s.size();i++){
			s[i]=tolower(s[i]);
		}
		vector<string> v;
		stringstream ss(s);
		string tmp;
		while(ss>>tmp){
			v.push_back(tmp);
		}
		for(int i=0;i<v.size()-1;i++){
			v[i][0]=toupper(v[i][0]);
		}
		for(int i=0;i<v[v.size()-1].length();i++){
			v[v.size()-1][i]=toupper(v[v.size()-1][i]);
		}
		for (int i=0;i<v.size();i++){
			cout<<v[i]<<' ';
		}
		
	}
	return 0;
}
