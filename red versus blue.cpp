#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int n,r,b;
		cin>>n>>r>>b;
		string s="";
		for (int i=0;i<=b;i++){
			for (int j=0;j<(r+i)/(b+1);j++)s+='R';
			if(i<b)s+='B';
		}
		cout<<s<<endl;
	}
	return 0;
}
