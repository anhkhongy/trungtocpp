#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		for(int i=0;i<s.length();i++){
			s[i]=tolower(s[i]);
		}
		stringstream ss(s);
		string tmp;
		vector<string> v;
		while(ss>>tmp)
		{
			v.push_back(tmp);
		}
		cout<<v[v.size()-1];
		for(int i=0;i<v.size()-1;i++){
			cout<<v[i][0];
		}
		cout<<"@gmail.com"<<endl;
	}
	return 0;
}
