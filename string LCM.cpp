#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		string s1,s2;
		cin>>s1>>s2;
		int a=s1.length();
		int b=s2.length();
		int n=a*b/__gcd(a,b);
		string res1="";
		string res2="";
		for (int i=0;i<n/a;i++){
			res1+=s1;
		}
		for (int i=0;i<n/b;i++){
			res2+=s2;
		}
		if(res1==res2){
			cout<<res1<<endl;
		}
		else {
			cout<<"-1"<<endl;
		}
	}
	return 0;
}
