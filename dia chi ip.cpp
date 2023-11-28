#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		bool ok=true;
		string s;
		cin>>s;
		s+='.';
		string tmp="";
		int cnt=0;
		for (int i=0;i<s.length();i++){
			if(s[i]>='0'&&s[i]<='9'){
				tmp=tmp+s[i];
			}
			else if(s[i]=='.'){
				cnt++;
				if(cnt>4){
					ok=false;
				}
				else {
					int ans=stoi(tmp);
					if(ans<0||ans>255){
						ok=false;
					}
				}
				tmp="";
			}
			else {
				ok=false;
			}
			
		}
		if(cnt==4&&ok==true){
			cout<<"YES\n";
		}
		else cout<<"NO\n";
	}
	return 0;
}
