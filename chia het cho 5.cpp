#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		long long res=0;
		long long a=1;
		for (long long i=s.size()-1;i>=0;i--){
			if(s[i]=='1'){
				res+=a;
				res%=5;
			}
			a*=2;
			a%=5;
		}
		 res == 0 ? cout << "Yes" : cout << "No"; cout << endl; } 
	
	return 0;
}
