#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	string s1,s2;
	getline(cin,s1);
	getline(cin,s2);
	set<string> se1,se2;
	map<string,int> mp1,mp2;
	stringstream ss1(s1);
	string tmp;
	while(ss1>>tmp){
		for (int i=0;i<tmp.length();i++){
			tmp[i]=tolower(tmp[i]);
		}
		se1.insert(tmp);
	}
	stringstream ss2(s2);
	string ans;
	while(ss2>>ans){
		for (int i=0;i<ans.length();i++){
			ans[i]=tolower(ans[i]);
		}
		se2.insert(ans);
	}
	
	for (string x:se2){
		mp2[x]++;
	}
	for (string x:se1){
		if(mp2[x]==0){
			cout<<x<<" ";
		}
	}
	return 0;
}
