#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	cin>>n;
	string s;
	cin>>s;
	int ans=0;
	map<char,int> mp;
	for (int i=0;i<n;i++){
		mp[s[i]]++;}
	int f=0;
	while(f<n){
	
		int z=0;
		for (int j=f;j<f+mp[s[f]];j++){
			if(s[j]==s[f]){
				z++;
			}
		}
		if(z==mp[s[f]]){
			s.erase(f,z);
			ans++;
			n-=z;
		}
		else ++f;
	}
	int res=INT_MIN;
	for (int i=0;i<n;i++){
		if(mp[s[i]]>res){
			res=mp[s[i]];
		}
	}
	char tmp;
	for (int i=0;i<n;i++){
		if(mp[s[i]]==res){
			tmp=s[i];
			break;
		}
	}
	
	int i=0;
	while(i<n){
		if(s[i]!=tmp){
			
			if(s[i+1]==s[i]){
				++i;
			}
			else {
				ans++;
				++i;
			}
		}
		else {
			
			++i;
		}
	}
	cout<<ans+1<<endl;
	
	return 0;
}
