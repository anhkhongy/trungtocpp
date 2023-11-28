#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		string res="";
		int l=0,cnt=0;
		while(l<s.length()){
			res+=s[l];
			while(s[l+1]==s[l]){
				++cnt;
				++l;
			}
			res+=char (cnt+1+'0');
			++l;
			cnt=0;
			
		}
		cout<<res<<endl;
	}
	return 0;
}
