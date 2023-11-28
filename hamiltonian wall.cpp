#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int n;
string s[2];
int g(int i,int j){
	if(j==n)return 1;
	if(s[i][j]=='W')return 0;
	if(s[1-i][j]=='B')return g(1-i,j+1);
	return g(i,j+1);
}
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		cin>>s[0]>>s[1];
		if(g(0,0)==1||g(1,0)==1)cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}
