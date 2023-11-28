#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin >> t;
	while (t--){
		string s1, s2;
		cin >> s1 >> s2;
		queue<pair<char, int>> q;
		int c[20][20] ;
		for (int i = 0; i < 8 ; i++){
			for (int j = 1; j <= 8;j ++){
				c[i][j] = -1;
			}
		}
		c[s1[0] - 'a'][s1[1] - '0'] = 0;
		q.push({s1[0], s1[1] - '0'});
		while (c[s2[0] - 'a'][s2[1] - '0'] == -1){
			
		}
	}
	return 0;
}
