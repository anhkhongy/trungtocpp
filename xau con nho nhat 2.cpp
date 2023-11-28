#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void solve(){
	string s;
	cin>>s;
	int dem[256]={0};
	map<char,int> mp;
	for (char x:s){
		mp[x]++;
	}
	int len=mp.size();
	int cnt=0,left=0,ans=INT_MAX;
	for (int i=0;i<s.length();i++){
		dem[s[i]]++;
		if(dem[s[i]]==1)cnt++;
		if(cnt==len){
			while(dem[s[left]]>1){
				dem[s[left]]--;
				left++;
			}
			if(i-left+1<ans){
				ans=i-left+1;
			}
		}
	}
	cout<<ans<<endl;
}
int main(int argc, char** argv) {
	int t;cin>>t;cin.ignore();
	while(t--){
		solve();
	}
	return 0;
}
