#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void solve(string s){
	int dem[256]={0};
	int ok[256]={0};
	set<char> se;
	for (char x:s){
		dem[x]++;
		ok[x]=1;
		se.insert(x);
	}
	int g=se.size();
	
	int ans=INT_MAX,left=0,cnt=0;
	for (int i=0;i<s.length();i++){
		if(dem[s[i]]>0&&ok[s[i]]==1){
			cnt++;
			ok[s[i]]=0;
		}
		if(cnt==g){
			while(dem[s[left]]>1){
				dem[s[left]]--;
				left++;
			}
			if(ans>i-left+1){
				ans=i-left+1;
			}
		}
	}
	cout<<ans<<endl;
}
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		solve(s);
	}
	return 0;
}
