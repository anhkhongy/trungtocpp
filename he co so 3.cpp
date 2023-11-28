#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		bool ok=true;
		for (int i=0;i<s.length();i++){
			if(s[i]!='0'&&s[i]!='1'&&s[i]!='2'){
				ok=false;
				break;
			}
		}
		if(!ok){
			cout<<"NO"<<endl;
		}
		else {
			cout<<"YES"<<endl;
		}
	}
	return 0;
}
