#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s1, s2;
		cin>>s1>>s2;
		for (int i=0;i<s1.length();i++){
			if(s1[i]=='6'){
				s1[i]='5';
			}
		}
		for (int i=0;i<s2.length();i++){
			if(s2[i]=='6'){
				s2[i]='5';
			}
		}
		long long c=stoll(s1);
		long long d=stoll(s2);
		cout<<c+d<<" ";
		for (int i=0;i<s1.length();i++){
			if(s1[i]=='5'){
				s1[i]='6';
			}
		}
		for (int i=0;i<s2.length();i++){
			if(s2[i]=='5'){
				s2[i]='6';
			}
		}
		c=stoll(s1);
		d=stoll(s2);
		cout<<c+d;
		cout<<endl;
	}
	return 0;
}
