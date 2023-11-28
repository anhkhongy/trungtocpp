#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	string s;
	cin>>s;
	int n=s.length();
	string res="";
	int cnt=1;
	int i=0;
	bool ok=true;
	while(i<n){
		if(s[i]=='I'){
			int dem=0;
			while(s[i]=='I'){
				dem++;
				++i;
			}
			int k;
			if(ok)k=dem;
			else {
				k=dem-1;
			}
			for (int j=1;j<=k;j++){
				cout<<cnt++;
			}
			if(i==n){
				cout<<cnt;
			}
		}
		else {
			ok=false;
			int ans=0;
			while(s[i]=='D'){
				ans++;
				++i;
				cnt++;
			}
			int tmp=cnt;
			for (int i=1;i<=ans+1;i++){
				cout<<tmp--;
			}
			cnt++;
		}
	}
	cout<<res;
	return 0;
}
