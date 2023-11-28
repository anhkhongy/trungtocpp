#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void solve(string s){
	int ans=0;
	for (int i=0;i<s.length()-2;i++){
		if(s[i]==' '){
			break;
		}
		if(s[i]=='1'&&s[i+1]=='0'&&s[i+2]=='0'){
			ans+=3;
			s.erase(i,3);
			i-=1;
		}
	}
	cout<<ans<<endl;
}
int main(int argc, char** argv) {
	int t;cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		solve(s);
	}
	return 0;
}
