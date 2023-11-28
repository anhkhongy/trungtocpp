#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int convert(char a){
	if(a=='a'||a=='b'||a=='c')return 2;
	if(a=='d'||a=='e'||a=='f')return 3;
	if(a=='g'||a=='h'||a=='i')return 4;
	if(a=='j'||a=='k'||a=='l')return 5;
	if(a=='m'||a=='n'||a=='o')return 6;
	if(a=='p'||a=='q'||a=='r'||a=='s')return 7;
	if(a=='t'||a=='u'||a=='v')return 8;
	if(a=='w'||a=='x'||a=='y'||a=='z')return 9;
	
}
bool tn(string s){
	int l=0,r=s.length()-1;
	while(l<r){
		if(s[l]!=s[r]){
			return false;
			
		}
		++l;
		--r;
	}
	return true;
}
int main(int argc, char** argv) {
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		cin >>s;
		for (int i=0;i<s.length();i++){
			s[i]=tolower(s[i]);
		}
		for (int i=0;i<s.length();i++){
			s[i]=convert(s[i])-'0';
		}
		if(tn(s)){
			cout<<"YES\n";	
		}
		else cout<<"NO\n";
	}
	return 0;
}
