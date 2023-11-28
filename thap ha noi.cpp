#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void thap(int n, char a, char b,char c){
	if (n == 1){
		cout << a << " -> " << c << endl;
		return ;
	}
	thap(n-1,a,c,b);
	thap(1,a,b,c);
	thap(n-1,b,a,c);
}
int main(int argc, char** argv) {
	int n;
	cin >> n;
	char a = 'A'; char b = 'B'; char c = 'C';
	thap(n,a,b,c);
	return 0;
}
