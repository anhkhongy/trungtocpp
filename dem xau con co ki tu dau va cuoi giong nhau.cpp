#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	cin.ignore();
	while(t--){
		string s;
		cin>>s;
		map<char,int> mp;
		for (char x:s){
			mp[x]++;
		}
		int res=s.length();
		for (auto it:mp){
			res+=it.second*(it.second-1)/2;
		}
		cout<<res<<endl;
	}
}
