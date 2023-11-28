#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	string s;
	getline(cin,s);
	for (int i=0;i<s.length();i++){
		if(s[i]>='A'&&s[i]<='Z'){
			if(s[i]=='Y'){
				s[i]='A';
			}
			else if(s[i]=='Z'){
				s[i]='B';
			}
			else {
				s[i]=char (s[i]+2);
			}
		}
		else if(s[i]>='a'&&s[i]<='z'){
			if(s[i]=='a'){
				s[i]='y';
			}
			else if(s[i]=='b'){
				s[i]='z';
			}
			else {
				s[i]=char (s[i]-2);
			}
		}
	}
	cout<<s;
	return 0;
}
