#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int n=s.length();
		int i=n-1;
		while(i>=0&&s[i]=='0'){
			--i;
		}
		if(i==-1){
			for (int j=0;j<n;j++){
				s[j]='1';
			}
		}
		else {
			s[i]='0';
			for (int j=i+1;j<n;j++){
				s[j]='1';
			}
		}
		cout<<s<<endl;
	}
	return 0;
}
