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
		int q=0;
		for (int i=0;i<s.length();i++){
			if(s[i]=='Q')q++;
			else if(s[i]=='A'&&q>0){
				q--;
			}
		}
		if(q>0){
			cout<<"No\n";
		}
		else cout<<"Yes\n";
	}
	return 0;
}
