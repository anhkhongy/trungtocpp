#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	string s;
	cin>>s;
	vector<char> v;
	for (int i=0;i<s.length();i++){
		s[i]=tolower(s[i]);
		if(s[i]!='a'&&s[i]!='e'&&s[i]!='o'&&s[i]!='u'&&s[i]!='i'&&s[i]!='y'){
			v.push_back(s[i]);
		}
	}
	for (char x:v){
		cout<<"."<<x;
	}
	cout<<endl;
	return 0;
}
