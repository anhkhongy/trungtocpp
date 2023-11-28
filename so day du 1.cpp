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
		map<int,int> mp;
		for (int i=0;i<s.length()-1;i++){
			if(!isdigit(s[i])||s[0]=='0'){
				ok=false;
				break;
			}
			else {
				mp[s[i]-'0']++;
			}
		}
		if(!ok){
			cout<<"INVALID\n";
		}
		else {
			int cnt=0;
			for (int i=0;i<=9;i++){
				if(mp[i]>0)cnt++;
			}
			
			if(cnt==9){
				cout<<"YES\n";
			}
			else cout<<"NO\n";
		}
	}
	return 0;
}
