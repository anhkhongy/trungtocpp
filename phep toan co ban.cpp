#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
string ans;
char sign[] = {'+', '-'};
bool ok;
bool check(string &s){
	int check;
	int a = stoi(s.substr(0, 2)); int b = stoi(s.substr(5, 2));
	if(s[3] == '+'){
		check = a + b;
	}
	else check = a - b;
	string tmp = s.substr(10, 2);
	string c = to_string(check);
	return tmp == c;
}
void Try(int i, string s){
	if(ok) return;
	if(i == s.size()){
		if(check(s)){
			ans = s;
			ok = 1;
		}
		return;
	}
	else if(s[i] != '?'){
		if(!ok) Try(i + 1, s);
	}
	else if(i == 3){
		for (char j : sign){
			s[i] = j;
			if(!ok) Try(i + 1, s);
		}
	}
	else if(i == 0 || i == 5 || i == 10){
		for(int j = '0'; j <= '9'; j ++){
			s[i] = j;
			if(!ok) Try(i + 1, s);
		}
	}
	else {
		for (int j = '0'; j <= '9'; j++){
			s[i] = j;
			if(!ok) Try(i + 1, s);
		}
	}
}
int main(int argc, char** argv) {
	int t;
	cin >> t;
	cin.ignore();
	while (t--){
		ok = 0;
		ans = "";
		string s;
		getline(cin, s);
		if(s[3] == '*' || s[3] == '/'){
			cout << "WRONG PROBLEM!" << endl;
		}
		else {
			Try(0, s);
			if(ans.length() == 0){
				cout << "WRONG PROBLEM!" << endl;
			}
			else {
				cout << ans << endl;
			}
		}
	}
	return 0;
}
