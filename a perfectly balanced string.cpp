#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
	
	string s;
	cin>>s;
	int n=s.length();
	set<char> set(s.begin(),s.end());
	int d=set.size();
	bool res=true;
	for (int i=d;i<n;i++){
		res &= s[i] == s[i-d];
	
	}
	if(res){
		cout<<"Yes"<<endl;
	}
	else cout<<"No"<<endl;}

	return 0;
}
