#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	cin>>n;
	string s;
	cin>>s;
	s.erase(n-5,2);
	cout<<s;
	return 0;
}
