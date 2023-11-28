#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int cnt=0;
		for (int i=0;i<s.length();i++){
			int n=0,sum=0;
			for (int j=i;j<s.length();j++){
				n=n*10+s[j]-'0';
				n%=8;
				sum+=s[j]-'0';
				if(n==0&&sum%3!=0){
					cnt++;
				}
			}
		}
		cout<<cnt<<endl;
	}
	return 0;
}
