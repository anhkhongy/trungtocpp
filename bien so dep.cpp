#include <bits/stdc++.h>
#include<string>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
bool check1(string s){
	for(int i=0;i<5;i++){
		if (s[i]>=s[i+1])return false;
	}
	return true;
}
bool check2(string s){
	for(int i=1;i<5;i++){
		if(s[i]!=s[0])return false ;
		
	}
	return true;
}
bool check3(string s){
	return (s[0]==s[1]&&s[1]==s[2]&&s[3]==s[4]);
}
bool check4(string s){
	for (int i=0;i<5;i++){
		if(s[i]!=6&&s[i]!=8)return false;
	}
	return true;
}
int main(int argc, char** argv) {
	int t;cin>>t;cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		string tmp=s.substr(5,6);
		tmp.erase(3,1);
		if(check1(tmp)&&check2(tmp)&&check3(tmp)&&check4(tmp)){
			cout<<"yes"<<endl;
		}
		else cout<<"no"<<endl;
	}
	return 0;
}
