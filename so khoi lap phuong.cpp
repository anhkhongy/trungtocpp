#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
bool check(string s1, string s2){
	int k = 0;
	for (int i = 0; i < s1.size(); i++){
		int ok = 0;
		for (int j = k ; j < s2.size(); j++){
			if(s1[i] == s2[j]){
				k = j + 1;
				ok = 1;
				break;
			}
		}
		if(ok == 0){
			return false;
		}
	}
	return true;
}
int main(int argc, char** argv) {
	int t;
	cin >> t;
	vector<string> v;
	for (long long i = 1; i <= 50; i++){
		v.push_back(to_string(i * i * i));
	}
	while (t--){
		long long n ;
		cin >> n;
		string tmp = to_string(n);
		string ans = "-1";
		for (int i = v.size() - 1; i >= 0; i--){
			if((v[i].size() < tmp.size() || v[i] < tmp ) && check(v[i], tmp) == true){
				ans = v[i];
				break;
			}
		}
		cout << ans << endl;
	}
	return 0;
}
