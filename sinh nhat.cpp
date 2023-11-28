#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s;
		cin>>s;
		int k;
		string res="";
		for (int i=s.length()-1;i>=0;i--){
			if(s[i]=='/'){
				k=i;
				break;
			}
		}
		res+=s.substr(0,k+1);
		int nam=stoi(s.substr(k+1))+n;
		res+=to_string(nam);
		cout<<res<<endl;
	}
	return 0;
}
