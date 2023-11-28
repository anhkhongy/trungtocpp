#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int n=s.size();
		int l=0,r=n-1;
		for (int i=0;i<n;i++){
			if(s[i]=='1'){
				l=i;
			}
			if(s[n-i+1]=='0'){
				r=n-i+1;
			}
		}
		cout<<r-l+1<<endl;
	}
	return 0;
}
