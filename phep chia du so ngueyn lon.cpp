#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		cin>>s;
		long long n;
		cin>>n;
		long long r=0;
		for (char x:s){
			r=r*10+(x-'0');
			r%=n;
		}
		cout<<r<<endl;
	}
	return 0;
}
