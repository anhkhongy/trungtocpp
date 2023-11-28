#include <bits/stdc++.h>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	string s;
	getline(cin,s);
	int it=s.find(' ');
	int ans=s.rfind(' ');
	cout<<s.substr(it+1,ans-it-1);
	return 0;
}

