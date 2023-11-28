#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		string res;
		int cnt=0;
		for (int i=s.length()-1;i>=0;i--){
			if(s[i]>=48&&s[i]<=57){
				res=s[i]+res;
				cnt++;
			}
			if(cnt==9){
				break;
			}
		}
		res="0"+res;
		cout<<res<<endl;
	}
	return 0;
}
