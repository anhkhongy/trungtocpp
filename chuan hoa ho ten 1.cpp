#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	string s;
	getline(cin,s);
	vector<string> v;
	stringstream ss(s);
	string tmp;
	while(ss>>tmp){
		tmp[0]=toupper(tmp[0]);
		for (int i=1;i<tmp.length();i++){
			tmp[i]=tolower(tmp[i]);
		}
		v.push_back(tmp);
	}
	int n=v.size();
	for (int i=0;i<n-2;i++){
		cout<<v[i]<<" ";
	}
	for (int i=0;i<v[v.size()-1].length();i++){
		v[v.size()-1][i]=toupper(v[v.size()-1][i]);
	}
	cout<<v[v.size()-2]<<", "<<v[v.size()-1];
	return 0;
}
