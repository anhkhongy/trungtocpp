#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
string convert(string s){
	int n=s.length();
	int k=-1;
	for (int i=0;i<n;i++){
		if(s[i]!='0'){
			k=i;
			break;
		}
	}
	if(k==-1)return s;
	else {
		s.erase(s.begin(),s.begin()+k);
		return s;
	}
}
int main(int argc, char** argv) {
	string s;
	cin>>s;
	string ans="";
	string tmp="";
	int ok=0;
	for (int i=0;i<s.length();i++){
		if(isdigit(s[i])&&ok==0){
			tmp+=s[i];
			ok=1;
		}
		else if(isdigit(s[i])&&ok==1){
			tmp+=s[i];
		}
		else if(!isdigit(s[i])&&ok==1){
			ok=0;
			tmp=convert(tmp);
			if(tmp.length()>ans.length()||(tmp.length()==ans.length()&&tmp>ans)){
				ans=tmp;
			}
			tmp="";
		}
	}
	if(tmp!=""){
		tmp=convert(tmp);
		if(tmp.length()>ans.length()||(tmp.length()==ans.length()&&tmp>ans)){
				ans=tmp;
			}
	}
	int k=-1;
	for (int i=0;i<ans.length();i++){
		if(ans[i]!='0'){
			k=i;
			break;
		}
	}
	if(k==-1){
		cout<<"0";
	}else {
	
	ans.erase(ans.begin(),ans.begin()+k);
	cout<<ans;}	
	return 0;
}
