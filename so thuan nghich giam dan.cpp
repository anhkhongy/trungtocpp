#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
bool check(string &s){
	if(s.length()==1)return false;
	string res="";
	for (int i=s.length()-1;i>=0;i--){
		res+=s[i];
	}
	if(res==s){
		return true;
	}
	return false;
}
bool cmp(pair<string,int> &a,pair<string,int> &b){
	if(a.first.length()==b.first.length()){
		return a.first>b.first;
	}
	return a.first.length()>b.first.length();
}
int main(int argc, char** argv) {
	string s;
	map<string,int> mp;
	vector<pair<string,int>> v;
	while(cin>>s){
		if(check(s)){
			mp[s]++;
		}
	}
	for (auto it:mp){
		v.push_back(it);
	}
	sort(v.begin(),v.end(),cmp);
	for (auto it:v){
		cout<<it.first<<" "<<it.second<<endl;
		
	}
	return 0;
}
