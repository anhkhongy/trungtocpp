#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;cin>>t;
	cin.ignore();
	while(t--){
		int a[26]={0};
		string s;
		cin>>s;
		int k;
		cin>>k;
		int cnt=0;
		for(char x:s){
			a[x-'a']=1;
		}
		for(int i=0;i<26;i++){
			if(a[i]==1)cnt++;
		}
		if(cnt>k){
			cout<<"0"<<endl;
		}
		else cout<<"1"<<endl;
	}
	return 0;
}
