#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		char c='9';
		for (int i=s.size()-1;i>=0;i--){
			c=min(c,s[i]);
			if(s[i]>c&&s[i]<'9'){
				s[i]+=1;
			}
		}
		sort(s.begin(),s.end());
		cout<<s<<endl;
	}
	return 0;
}
