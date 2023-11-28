#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;cin>>s;
		s+='a';
		int ans=0;
		int sum=0;
		for (char x:s){
			if(isdigit(x)){
				sum=sum*10+x-'0';
			}
			else {
				ans=max(ans,sum);
				sum=0;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
