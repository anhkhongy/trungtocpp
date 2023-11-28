#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		map<char,int> mp;
		for (int i=0;i<s.length();i++){
			mp[s[i]]++;
		}
		int max=INT_MIN;
		for (auto it:mp){
			if(it.second>max){
				max=it.second;
			}
		}
		if(s.length()-max<max-1){
			cout<<"0"<<endl;
		}
		else cout<<"1"<<endl;
	}
	return 0;
}
