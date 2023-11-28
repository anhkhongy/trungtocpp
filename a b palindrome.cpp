#include<bits/stdc++.h>
using namespace std;
string s;
int n,a,b,t;
int main(){
	cin>>t;
	while(t--){
		cin>>a>>b>>s,n=a+b;
		bool ok=1;
		for(int i=0;i<n;i++)if(s[i]!='?'){
			if(s[n-i-1]!='?')ok&=s[i]==s[n-i-1];
			else s[n-i-1]=s[i];
		}
		a-=(int)count(s.begin(),s.end(),'0'),b-=(int)count(s.begin(),s.end(),'1');
		for(int i=0;i<n-i-1;i++)if(s[i]=='?'){
			if(a>1)s[i]=s[n-i-1]='0',a-=2;
			else s[i]=s[n-i-1]='1',b-=2;
		}
		if(!ok||a<0||b<0)cout<<"-1\n";
		else{
			if(a>0)s[(n-1)/2]='0';
			else if(b>0)s[(n-1)/2]='1';
			cout<<s<<'\n';
		}
	}
	return 0;
}
