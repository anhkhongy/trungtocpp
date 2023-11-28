#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int n;
char s[100], c[8];
bool ktra[100];
void init(){
	for(int i = 1; i <= 10; i++){
		ktra[i] = true;
	}
}
void display(int n){
	for (int i = 1; i <= n; i++){
		cout << s[i];
	}
	cout << endl;
}
bool check(int n){
	if(s[n] == '2')return false;
	for (int i = 1; i <= n; i++){
		if(s[i] == '2')ktra[2] = false;
		else if(s[i] == '3')ktra[3] = false;
		else if(s[i] == '5')ktra[5] = false;
		else if(s[i] == '7')ktra[7] = false;
	}
	if(ktra[2] == true)return false;
	else if(ktra[3] == true)return false;
	else if(ktra[5] == true)return false;
	else if(ktra[7] == true)return false;
	return true;
}
void Try(int pos, int n){
	for (int i = 1; i <= 4; i++){
		s[pos] = c[i];
		if(pos == n){
			if(check(n))display(n);
			init();
		}
		else Try(pos + 1, n);
	}
}
int main(int argc, char** argv) {
	c[1] = '2';
	c[2] = '3';
	c[3] = '5';
	c[4] = '7';
	int n;
	cin >> n;
	init();
	int cnt = 4;
	while(cnt <= n){
		Try(1, cnt);
		++cnt;
	}
	return 0;
}
