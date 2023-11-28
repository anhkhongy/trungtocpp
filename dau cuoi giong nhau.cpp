#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int cnt=0;
		for (int i=0;i<s.length();i++){
			int r=s.length()-1;
			while(i<=r){
				if(s[i]==s[r]){
					cnt++;
				}
				--r;
			}
		}
		cout<<cnt<<endl;
	}
	return 0;
}
