#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	string s;
	cin>>s;
	set<char> st;
	int cnt=0;
	for(int i=0;i<s.length();i++){
		if(st.find(s[i])==st.end())cnt++;
		st.insert(s[i]);
	}
	if(cnt==26)cout<<"yes"<<endl;
	else cout<<"no"<<endl;
	return 0;
}
