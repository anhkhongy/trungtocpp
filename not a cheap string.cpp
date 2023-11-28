#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int p;
		cin>>p;
		vector<int> v;
		string res="";
		for (int i=0;i<s.length();i++){
			v.push_back(s[i]-96);
		}
		sort(v.begin(),v.end());
		int tong=0;
		map<int,int> mp;
		for (int it:v){
			if((tong+it)<=p){
				mp[it]++;
				tong+=it;
			}
		}
		for (int i=0;i<s.length();i++){
			if(mp[s[i]-96]>0){
				res+=s[i];
			}
			mp[s[i]-96]--;
		}
		cout<<res<<endl;
	}
	return 0;
}
