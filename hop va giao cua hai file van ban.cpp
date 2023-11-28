#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	ifstream fin1("DATA1.in");
	ifstream fin2("DATA2.in");
	set<string> s1,s3,s4;
	string s;
	while(fin1>>s){
		for (int i=0;i<s.size();i++){
			s[i]=tolower(s[i]);
		}
		s1.insert(s);
		s3.insert(s);
	}
	while(fin2>>s){
		for (int i=0;i<s.size();i++){
			s[i]=tolower(s[i]);
		}
		s3.insert(s);
		if(s1.find(s)!=s1.end()){
			s4.insert(s);
		}
	}
	for (string it:s3){
		cout<<it<<" ";
	}
	cout<<endl;
	for (auto it:s4){
		cout<<it<<" ";
	}
	return 0;
}
