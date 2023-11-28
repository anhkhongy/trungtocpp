#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct DoiBong{
	int diem,hieuso;
};
bool cmp(pair<string,DoiBong> a,pair<string,DoiBong> b){
	if(a.second.diem!=b.second.diem){
		return a.second.diem>b.second.diem;
	}
	if(a.second.hieuso!=b.second.hieuso){
		return a.second.hieuso>b.second.hieuso;
	}
	return a.first<b.first;
}
int main(int argc, char** argv) {
	string s;
	map<string,DoiBong> mp;
	while(getline(cin,s)){
		string t1="",t2="";
		int i=1;
		while(s[i]!=']'){
			t1+=s[i];
			++i;
		}
		i+=2;
		int x=0;
		while(s[i]!=' '){
			x=x*10+s[i]-'0';
			++i;
		}
		i+=3;
		int y=0;
		while(s[i]!=' '){
			y=y*10+s[i]-'0';
		}
		i+=2;
		while(s[i]!=']'){
			t2+=s[i];
			++i;
		}
		if(mp.count(t1)==0){
			mp[t1].diem=0;
			mp[t1].hieuso=0;
		}
		if(mp.count(t2)==0){
			mp[t2].diem=0;
			mp[t2].hieuso=0;
		}
		if(x>y){
			mp[t1].diem+=3;
			
		}
		else if(x<y){
			mp[t2].diem+=3;
			
		}
		else {
			mp[t1].diem+=1;
			mp[t2].diem+=1;
		}
		mp[t1].hieuso+=x-y;
		mp[t2].hieuso+=y-x;
	}
	vector<pair<string,DoiBong>> v;
	for (auto it:mp){
		v.push_back(it);
	}
	sort(v.begin(),v.end(),cmp);
	for (auto it:v){
		cout<<it.first<<" "<<it.second.diem<<" "<<it.second.hieuso<<endl;
	}
	return 0;
}
