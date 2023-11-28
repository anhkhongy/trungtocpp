#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void next(string s){
	int n=s.length()-1;
	
	while(n>=0&&s[n]=='1'){
		s[n]='0';
		--n;
	}
	if(n!=-1){
		s[n]='1';
	}
	cout<<s<<endl;
}
int main(int argc, char** argv) {
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		cin>>s;
		next(s);
	}
	return 0;
}
