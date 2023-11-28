#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int n=s.length()-1;
		while(s[n]=='1'){
			n--;
		}
		if(n!=-1){
			s[n]='1';
		}
		for (int i=n+1;i<s.length();i++){
			s[i]='0';
		}
		cout<<s<<endl;
	}
	return 0;
}
