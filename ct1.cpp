#include <iostream>
#include <set>
#include <map>
#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	cin.ignore();
	map<string,int>mp;
	while(t--){
		string s;
		getline(cin,s);
		if (mp.count(s)==1){
			cout<<s<<mp[s]+1<<endl;
		} 
		else {
			mp.insert({s,0});
			cout<<s<<endl;
		}
	}
	return 0;
}
