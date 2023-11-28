#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	string s;
	cin >> s;
	int f[205] ;
	for(int i = 0; i < s.length(); i++){
		f[i] = 1;
	}
	int ans = 0;
	for (int i = 1; i < s.length(); i++){
		for (int j = 0; j < i; j++){
			if(s[j] <= s[i]){
				f[i] = max(f[i], f[j] + 1);
			}
			
		}
		ans = max(ans, f[i]);
	}
	cout << ans << endl;
	return 0;
}
