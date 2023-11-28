#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		string s;
		cin>>s;
		int cnt=INT_MAX;
		int l=0,r=k-1;
		int w=0;
		for (int i=l;i<=r;i++){
			if(s[i]=='W')w++;
		}
		cnt=w;
		++l;++r;
		while(r<n){
			if(s[l-1]=='W')w--;
			if(s[r]=='W')w++;
			cnt=min(cnt,w);
			++l;++r;
		}
		cout<<cnt<<endl;
	}
	return 0;
}
