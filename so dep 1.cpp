#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		if(n<0){
			n*=-1;
		}
		string s=to_string(n);
		
		bool ok=true;
		for (int i=0;i<s.length();i++){
			if((s[i]-'0')%2==1&&(i+1)%2==0){
				ok=false;
			}
			else if((s[i]-'0')%2==0&&(i+1)%2==1){
				ok=false;
			}
		}
		if(!ok){
			cout<<"NO"<<endl;
		}
		else {
			cout<<"YES"<<endl;
		}
	}
	return 0;
}
