#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
vector<int> check(10000, 1);
void era(){
	for (int i = 2; i * i <= 9999; i++){
		if(check[i]){
			for (int j = i * i; j <= 9999; j+= i){
				check[j] = 0;
			}
		}
	}
}
int toint(string s){
	int n = 0;
	for (int i = 0; i < s.length(); i++){
		n = n * 10 + s[i] - '0';
	}
	return n;
}
int main(int argc, char** argv) {
	int t;
	cin >> t;
	era();
	while (t--){
		string st, ed;
		cin >> st >> ed;
		pair<string, int> u, v;
		queue<pair<string, int>> q;
		map<string, int> mp;
		mp[st] ++;
		q.push({st, 0});
		while(1){
			u = q.front();
			q.pop();
			if(u.first == ed){
				cout << u.second << endl;
				break;
			}
			for (int i = 0; i < 4; i++){
				int pos = 0;
				if(i == 0){
					pos++;
				}
				for (int j = pos; j <= 9; j++){
					string s = u.first;
					s[i] = j + '0';
					if(mp[s] == 0 && check[toint(s)] == 1){
						q.push({s, u.second + 1});
						mp[s] ++;
					}
				}
			}
		}
	}
	return 0;
}
