#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
string add(string a,string b){
	if(a.size()<b.size()){
		swap (a,b);
	}
	int len1=a.size();
	int len2=b.size();
	b+=string(len1-len2,'0');
	string res="";
	reverse(a.begin(),a.end());
	reverse(b.begin(),b.end());
	int carry=0;
	for (int i=0;i<len1;i++){
		int tmp=a[i]-'0'+b[i]-'0'+carry;
		res+=(char)('0'+tmp%10);
		carry=tmp/10;
		
	}
	if(carry){
		res+=(char)('0'+carry);
	}
	reverse(res.begin(),res.end());
	return res;
}
bool kt(string s,int l,int len1,int len2){
	string s1=s.substr(l,len1);
	string s2=s.substr(l+len1,len2);
	string s3=add(s1,s2);
	if(s3.length()>s.length()-len1-len2)return false;
	if(s3==s.substr(l+len1+len2,s3.length())){
		if(l+len1+len2+s3.length()==s.length()){
			return true;
		}
		return kt(s,l+len1,len2,s3.length());
	}
	return false;
}

int main(int argc, char** argv) {
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		cin>>s;
		for (int i=1;i<s.length();i++){
			for (int j=1;j<s.length()-1;j++){
				if(kt(s,0,i,j)){
					cout<<"yes\n";
				}
				else cout<<"no\n";
				
			}
		}
	}
	return 0;
}
