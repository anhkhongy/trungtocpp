#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		string s1,s2;
		cin>>s1>>s2;
		int ma=INT_MIN;
		for (int i=0;i<s1.length();i++){
			for (int j=0;j<s1.length();j++){
				string res=s1.substr(i,j-i+1);
				if(s2.find(res)!=string::npos){
					ma=max(ma,j-i+1);
				}
			}
		}
		cout<<s1.length()-ma+s2.length()-ma<<endl;
	}
	return 0;
}
