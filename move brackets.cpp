#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s;
		cin>>s;
		int m=0,d=0;
		int cnt=0;
		for (int i=0;i<s.length();i++){
			if(s[i]=='('){
				m++;
			}
			else if(s[i]==')'){
				if(m==0){
					cnt++;
				}
				else {
					m--;
				}
			}
		}
		cout<<cnt<<endl;
	}
	return 0;
}
