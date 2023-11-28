#include<bits/stdc++.h>

using namespace std;
string add(string a,string b){
	if(a.length()<b.length()){
		swap(a,b);
	}
	int len1=a.length();
	int len2=b.length();
	b=string(len1-len2,'0')+b;
	reverse(a.begin(),a.end());
	reverse(b.begin(),b.end());
	int nho=0;
	string res="";
	for (int i=0;i<len1;i++){
		int tmp=a[i]-'0'+b[i]-'0'+nho;
		res+=char('0'+tmp%10);
		nho=tmp/10;
	}
	if(nho>0){
		res+=char('0'+nho);
	}
	reverse(res.begin(),res.end());
	return res;
}
int main(){

	string a;string b;
	cin>>a>>b;
	cout<<add(a,b);
}
