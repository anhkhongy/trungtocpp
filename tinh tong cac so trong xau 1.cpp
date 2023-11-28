#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		cin>>s;
		long sum=0;
		long nho=0;
		for (int i=0;i<s.length();i++){
			if(isdigit(s[i])){
				while(isdigit(s[i])){
					nho=nho*10+s[i]-'0';
					++i;
				}
			}
			sum+=nho;
			nho=0;
		}
		cout<<sum<<endl;
	}
	return 0;
}
