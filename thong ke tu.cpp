#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
bool check(char a){
	return a==' '||a=='.'||a==','||a=='!'||a=='?'||a=='-';
	
}
bool cmp(pair<string,int> a,pair<string,int> b){
	
	if (a.second!=b.second){
		return a.second>b.second;
		
	}
	return a.first<b.first;
}
int main(int argc, char** argv) {
	int n;
	cin>>n;
	cin.ignore();
	while(n--){
		string s;
		getline(cin,s);
		map<string,int> mp;
		
		string tmp="";
		for(int i=0;i<s.length();i++){
		
			if(s[i]==' ')continue;
			while(i<s.length()&&!check(s[i])){
				tmp+=s[i];
				++i;
			}
			mp[tmp]++;
			tmp="";
		}
		vector <pair<string,int>> v;
		for (auto it:mp){
			v.push_back(it);
		}
		sort (v.begin(),v.end(),cmp);
		for (auto it:v){
			cout<<it.first<<' '<<it.second<<endl;
		}
	}
	return 0;
}
