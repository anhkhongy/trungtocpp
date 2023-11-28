#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		map<char,int> mp;
		string s;
		cin>>s;
		for (int i=0;i<s.length();i++){
			mp[s[i]]++;
		}
		for (int i=0;i<s.length();i++){
			if(mp[s[i]]==1){
				cout<<s[i];
			}
		}
		cout<<endl;
	}
	return 0;
}
