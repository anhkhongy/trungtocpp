#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		string a;
		cin>>a;
		int l=0,r=0;
		bool ok=true;
		for (int i=0;i<a.length()-1;i++){
			if(a[i]=='0'&&a[i+1]=='0'){
				l=r;
				r=i;
			}
		for (int j=l;j<r;j++){
			if(a[j]=='1'&&a[j+1]=='1'){
				ok=false;
			}
		}}
		if(!ok){
			cout<<"NO\n";
		}
		else cout<<"YES\n";
	
	}
	return 0;
}
