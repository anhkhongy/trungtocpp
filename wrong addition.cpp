#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		string a,s;
		cin>>a>>s;
		string res="";
		bool ok=true;
		int b=s.length()-1;
		int c=a.length()-1;
		while(b>=0&&c>=0){
			int tmp;
			if(s[b]<a[c]){
				--b;
				tmp=(s[b]-'0')*10+s[b+1]-'0'-(a[c]-'0');
			}
			else {
				tmp=s[b]-'0'-(a[c]-'0');
			}
			if(tmp>=10){
				ok=false;
				break;
			}
			res=char(tmp+'0')+res;
			--b;
			--c;
		}
		if(b>=0&&ok==true){
			while(b>=0){
				int tmp=(s[b]-'0')-0;
				res=char(tmp+'0')+res;
				--b;
			}
		}
		else if(c>=0&&ok==true){
			ok=false;
		}
		if(!ok){
			cout<<"-1"<<endl;
		}
		else cout<<stoll(res)<<endl;
	}
	return 0;
}
