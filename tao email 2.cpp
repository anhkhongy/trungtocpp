#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;cin>>t;
	cin.ignore();
	map<string,int> mp;
	while(t--){
		string s;
		getline(cin,s);
		for (int i=0;i<s.length();i++){
			s[i]=tolower(s[i]);
		}
		vector<string> v;
		stringstream ss(s);
		string tmp;
		string res="";
		while(ss>>tmp){
			v.push_back(tmp);
		}
		res+=v[v.size()-1];
		for (int i=0;i<v.size()-1;i++){
			res+=v[i][0];
		}
		if(mp[res]==0){
			cout<<res<<"@gmail.com"<<endl;
		}
		else {
			cout<<res<<mp[res]+1<<"@gmail.com"<<endl;
		}
		mp[res]++;
	}
	return 0;
}
