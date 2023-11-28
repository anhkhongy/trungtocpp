#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int k;
		cin>>k;
		map<char,int> mp;
		int i=0,cnt=0;
		while(i<s.length()){
		
			while(mp.size()<=k){
				++i;
				mp[s[i]]++;
			}
			mp.erase(s[i]);
			char b=s[0];
			cout<<b<<endl;
			cnt+=mp[s[0]]*mp[s[i-1]];
			mp.erase(b);
			
			++i;
		}
		cout<<cnt<<endl;
	}
	return 0;
}
