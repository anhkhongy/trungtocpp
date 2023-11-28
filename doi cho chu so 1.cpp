#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		
		int i=s.length()-1;
		while(i>0&&s[i-1]<s[i]){
			--i;
		} 
		if(i==0){
			cout<<"-1"<<endl;
		}
		else {
			for (int j=s.length()-1;j>=i;j--){
				if(s[j]<s[i-1]){
					swap(s[j],s[i-1]);
					break;
				}
			}
			cout<<s<<endl;
		}
		
	}
	return 0;
}
