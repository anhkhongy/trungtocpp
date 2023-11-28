#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	cin>>n;
	set<string> se;
	cin.ignore();
	for (int i=0;i<n;i++){
		string s;
		getline(cin,s);
		se.insert(s);
	}
	cout<<se.size();
	return 0;
}
