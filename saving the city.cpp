#include <bits/stdc++.h>
using namespace std;
int t,a,b,ans,last;
string s;
int main(){
	cin >> t;
	while (t--){
		cin >> a>> b >> s;
		ans=0; last=-2e5;
		for(int i=0; i<s.size(); i++)
			if(s[i]=='1'){
				ans+=min(a,b*(i-last-1));
				last=i;
			}
		cout<<ans<<endl;
	}
}
