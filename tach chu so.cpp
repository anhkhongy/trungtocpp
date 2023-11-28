#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		multiset<char>se;
		int sum=0;
		for (int i=0;i<s.length();i++){
			if(isdigit(s[i])){
				sum+=s[i]-'0';
			}
			else {
				se.insert(s[i]);
			}
		}
		for (char x:se){
			cout<<x;
		}
		cout<<sum;
		cout<<endl;
	}
	return 0;
}
