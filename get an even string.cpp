#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		map<char,int> p;
		int A=s.size();
		for (int i=0;i<s.size();i++){
			if(p[s[i]]>0){
				A-=2;
				p.clear();
			}
			else{
				p[s[i]]++;
			}
		}
		cout<<A<<endl;
	}
	return 0;
}
