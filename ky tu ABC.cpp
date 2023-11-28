#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void generateStrings(int n, string s){
	if(n == 0){
		cout << s << endl;
		return;
	}
	generateStrings(n - 1, s + 'A');
	if(s[s.length() - 1] != 'B'){
		generateStrings(n - 1, s + 'B');
	}
	if( s[s.length() - 1] != 'C'){
		generateStrings(n - 1, s + 'C');
	}
}
int main(int argc, char** argv) {
	int n = 3;
	generateStrings(n, "");
	return 0;
}
