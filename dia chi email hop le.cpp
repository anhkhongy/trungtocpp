#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		bool ok=true;
		int cnt=0;
		for (int i=0;i<s.length();i++){
			if(s[i]=='@'){
				cnt++;
			}
		}
		if(cnt!=1){
			ok=false;
		}
		int it=s.find('@');
		if(it==0){
			ok=false;
		}
		if(it>64||(s.length()-it-1)>254){
			ok=false;
		}
		int ans=0;
		for (int i=it;i<s.length();i++){
			if(s[i]=='.'){
				ans++;
			}
		}
		if(ans==0){
			ok=false;
		}
		int ft=s.find('.',it);
		if(ft-it==1||s.length()-ft==1){
			ok=false;
		}
		int tmp=0;
		for (int i=0;i<s.length();i++){
			if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z')||(s[i]>='0'&&s[i]<='9')||s[i]=='.'||s[i]=='_'){
				tmp++;
			}
		}
		if(tmp<s.length()-1){
			ok=false;
		}
		if(ok==false){
			cout<<"NO"<<endl;
		}
		else {
			cout<<"YES"<<endl;
		}
	}
	return 0;
}
