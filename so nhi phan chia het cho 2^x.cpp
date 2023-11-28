#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*so nhi phan chia het cho 2^x
xet cac so tu 0 den x-1 deu phai bang 0 vitu x tro di chi het cho 2^x */
bool check(string s,int n){
	for (int i=s.length()-1;i>=s.length()-1-n;i++){
		if (s[i]=='1')return false;
	}
	return true;
}
int main(int argc, char** argv) {
	int t;cin>>t;
	cin.ignore();
	while(t--){
		string s;
		cin>>s;
		int x;
		cin>>x;
		if(check(s,x)){
			cout<<"yes"<<endl;
		}
		else cout<<"no"<<endl;
	}
	return 0;
}
