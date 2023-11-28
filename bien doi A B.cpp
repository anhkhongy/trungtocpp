#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	string s;
	cin>>s;
	int cnt=0,ans=0;
	
	for (int i=0;i<s.length();i++){
		if(s[i]=='B'){
			cnt++;
		}
	}
	int tmp=0;
	for (int i=0;i<s.length()-1;i++){
		
		if(s[i]==s[i+1]){
			tmp++;
			while(s[i]==s[i+1]){
				++i;
			}
		}
		else tmp++;
	}
	
	if(s[s.length()-1]!=s[s.length()-2]){
		tmp++;
	}
	if(tmp==2&&s[0]=='B'||s[s.length()-1]=='A'){
		tmp--;
	}
	if(tmp<=cnt){
		cout<<tmp;
	}
	else cout<<cnt;
	
	return 0;
}
