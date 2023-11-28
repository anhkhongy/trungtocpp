#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		if(s.length()<=100){
			cout<<s<<endl;
		}
		else{
			if(s[100]==' '){
				s.erase(100);
			}
			else {
				for (int i=99;i>=0;i--){
					if(s[i]==' '){
						s.erase(i);
						break;
					}
				}
			}
			cout<<s<<endl;
		}
	}
	return 0;
}
