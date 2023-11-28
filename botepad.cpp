#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s;
		cin>>s;
		int dem=0;
		if(s.length()<=3){
			dem=0;
		}
		else{
		
		for (int i=0;i<s.length()-2;i++){
			string res="";
			res=res+s[i];
			res=res+s[i+1];
			if(s.find(res,i+2)!=string::npos){
				dem++;
			}
		}}
		if(dem>0){
			cout<<"YES\n";
		}
		else cout<<"NO\n";
	}
	return 0;
}
