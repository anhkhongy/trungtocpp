#include <bits/stdc++.h>
using namespace std; 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int k=1;
		for (int i=1;i<=n;i++){
			k*=2;
		}
		string s[k+5];
		s[1]='0';
		s[2]='1';
		if(n>1){
			int t=2;
			for (int i=2;i<=n;i++){
				int l=1;
				for (int j=1;j<=i;j++){
					l*=2;
				}
				for (int i=1;i<=t;i++){
					s[l-i+1]='1'+s[i];
					s[i]='0'+s[i];
				}
				t=l;
			}
			
		}
		for (int i=1;i<=k;i++){
			cout<<s[i]<<' ';
		}
		cout<<endl;
	}
	return 0;
}
