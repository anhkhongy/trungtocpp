#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int k;
		cin>>k;
		if(s.length()<26)cout<<"0"<<endl;
		else {
			set<char> se;
			int cnt;
			for (int i=0;i<s.length();i++){
				se.insert(s[i]);
			}
			cnt=26-se.size();
			if(cnt<=k){
				cout<<"1"<<endl;
				
			}
			else cout<<"0"<<endl;
		}
	}
	return 0;
}
