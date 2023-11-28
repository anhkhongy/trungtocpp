#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int a=0,b=0;
		int dem=0;
		for (int i=0;i<s.length();i++){
			if(s[i]=='B'&&b==0&&a==0){
				b++;
			}
			else if(s[i]=='B'&&a>0){
				dem++;
				a--;
			}
			else if(s[i]=='B'&&b>0&&a==0){
				b--;
				dem++;
			}
			else if(s[i]=='A'){
				++a;
			}
		}
		cout<<s.length()-dem*2<<endl;
	}
	return 0;
}
