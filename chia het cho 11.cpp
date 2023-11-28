#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		long long sum=0;
		for (int i=s.length()-1;i>=0;i--){
			sum=sum*10+s[i]-'0';
			sum%=11;
		}
		if(sum==0){
			cout<<"1"<<endl;
		}
		else cout<<"0"<<endl;
	}
	return 0;
}
