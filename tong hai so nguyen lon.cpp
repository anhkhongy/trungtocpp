#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void sum(string a,string b){
	while(a.length()<b.length()){
		a="0"+a;
	}
	while(b.length()<a.length()){
		b="0"+b;
	}
	string res="";
	int nho=0;
	for (int i=a.length()-1;i>=0;i--){
		int tmp=a[i]-'0'+b[i]-'0'+nho;
		nho=tmp/10;
		tmp=tmp%10;
		res=char (tmp+'0')+res;
	}
	if(nho==1){
		res="1"+res;
	}
	cout<<res<<endl;
}
int main(int argc, char** argv) {
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s1, s2;
		cin>>s1>>s2;
		sum(s1,s2);
	}
	return 0;
}
